/*
Question: Search in a sorted array using binary search.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],x,lo=0,hi,mid,found=-1,i;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&x)!=1) return 1;
    hi=n-1;
    while(lo<=hi) {
        mid=lo+(hi-lo)/2;
        if(a[mid]==x) { found=mid; break; }
        if(a[mid]<x) lo=mid+1; else hi=mid-1;
    }
    if(found>=0) printf("Found at index %d\n",found); else puts("-1");
    return 0;
}
