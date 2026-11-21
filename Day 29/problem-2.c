/*
Question: Find the maximum and minimum element in an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,mx,mn;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    mx=mn=a[0];
    for(i=1;i<n;i++) { if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }
    printf("Max=%d, Min=%d\n",mx,mn);
    return 0;
}
