/*
Question: Write a program to reverse a given number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    long long n,rev=0;
    if(scanf("%lld",&n)!=1) return 1;
    while(n!=0) { rev=rev*10+n%10; n/=10; }
    printf("%lld\n",rev);
    return 0;
}
