/*
Question: Write a program to calculate the factorial of a number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i; unsigned long long fact=1;
    if(scanf("%d",&n)!=1 || n<0 || n>20) return 1;
    for(i=2;i<=n;i++) fact*=(unsigned long long)i;
    printf("%llu\n",fact);
    return 0;
}
