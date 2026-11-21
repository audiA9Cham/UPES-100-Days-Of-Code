/*
Question: Write a program to check if a number is a perfect number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i; long long sum=0;
    if(scanf("%d",&n)!=1 || n<=0) return 1;
    for(i=1;i<=n/2;i++) if(n%i==0) sum+=i;
    puts(sum==n?"Perfect number":"Not perfect number");
    return 0;
}
