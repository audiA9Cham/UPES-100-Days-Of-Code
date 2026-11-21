/*
Question: Write a program to find the sum of digits of a number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    long long n; int sum=0;
    if(scanf("%lld",&n)!=1) return 1;
    n=llabs(n);
    while(n>0) { sum+=(int)(n%10); n/=10; }
    printf("%d\n",sum);
    return 0;
}
