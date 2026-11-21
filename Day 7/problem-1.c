/*
Question: Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int y;
    if(scanf("%d",&y)!=1) return 1;
    if(y%400==0 || (y%4==0 && y%100!=0)) printf("Leap year\n");
    else printf("Not a leap year\n");
    return 0;
}
