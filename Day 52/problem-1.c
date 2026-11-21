/*
Question: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],x,low=0,high,mid,answer=-1,i;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&x)!=1) return 1;
    high=n-1;
    while(low<=high) {
        mid=low+(high-low)/2;
        if(a[mid]>=x) { answer=mid; high=mid-1; }
        else low=mid+1;
    }
    printf("%d\n",answer);
    return 0;
}
