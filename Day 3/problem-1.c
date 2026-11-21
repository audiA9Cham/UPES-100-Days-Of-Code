/*
Question: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    double c;
    if (scanf("%lf", &c) != 1) return 1;
    printf("Fahrenheit=%.0f\n", c*9.0/5.0+32);
    return 0;
}
