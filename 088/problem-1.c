/*
Question: Print all enum names and integer values using a loop.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum TrafficLightNames { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    int i;

    for (i = RED; i <= GREEN; i++)
        printf("%s=%d\n", names[i], i);

    return 0;
}
