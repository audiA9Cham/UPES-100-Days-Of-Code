/*
Question: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i; long long sum=0,expected;
    if(scanf("%d",&n)!=1 || n<0 || n>1000) return 1;
    for(i=0;i<n;i++) { if(scanf("%d",&a[i])!=1) return 1; sum+=a[i]; }
    expected=(long long)n*(n+1)/2;
    printf("%lld\n",expected-sum);
    return 0;
}
