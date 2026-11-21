/*
Question: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char input[20];
    enum TrafficLight light;

    if (scanf("%19s", input) != 1) return 1;

    if (strcmp(input, "RED") == 0) light = RED;
    else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(input, "GREEN") == 0) light = GREEN;
    else {
        puts("Invalid traffic light");
        return 0;
    }

    switch (light) {
        case RED: puts("Stop"); break;
        case YELLOW: puts("Wait"); break;
        case GREEN: puts("Go"); break;
    }
    return 0;
}
