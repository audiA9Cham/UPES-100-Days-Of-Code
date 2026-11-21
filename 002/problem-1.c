/*
Question: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    double l, b;
    if (scanf("%lf %lf", &l, &b) != 2) return 1;
    printf("Area=%.0f, Perimeter=%.0f\n", l*b, 2*(l+b));
    return 0;
}
