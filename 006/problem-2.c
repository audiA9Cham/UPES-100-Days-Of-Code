/*
Question: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1) return 1;
    if(n>0) printf("Positive\n"); else if(n<0) printf("Negative\n"); else printf("Zero\n");
    return 0;
}
