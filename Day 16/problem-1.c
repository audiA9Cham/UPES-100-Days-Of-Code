/*
Question: Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    unsigned int n; int bits[32],count=0,i;
    if(scanf("%u",&n)!=1) return 1;
    if(n==0) { puts("0"); return 0; }
    while(n>0) { bits[count++]=(int)(n%2); n/=2; }
    for(i=count-1;i>=0;i--) printf("%d",bits[i]);
    putchar('\n');
    return 0;
}
