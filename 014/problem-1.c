/*
Question: Write a program to print the sum of the first n odd numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i; long long sum=0;
    if(scanf("%d",&n)!=1 || n<0) return 1;
    for(i=1;i<=n;i++) sum+=2LL*i-1;
    printf("%lld\n",sum);
    return 0;
}
