/*
Question: Reverse an array without taking extra space.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,t;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    for(i=0;i<n/2;i++) { t=a[i]; a[i]=a[n-1-i]; a[n-1-i]=t; }
    for(i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
