/*
Question: Write a program to swap two numbers without using a third variable.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int a,b;
    if (scanf("%d %d",&a,&b)!=2) return 1;
    a=a^b; b=a^b; a=a^b;
    printf("After swap: %d %d\n",a,b);
    return 0;
}
