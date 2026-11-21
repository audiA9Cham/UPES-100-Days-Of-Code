/*
Question: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int m,n,a[1000],b[1000],merged[2000],i=0,j=0,k=0;
    if(scanf("%d",&m)!=1 || m<0 || m>1000) return 1;
    for(i=0;i<m;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&n)!=1 || n<0 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&b[i])!=1) return 1;
    i=0;
    while(i<m&&j<n) { if(a[i]<=b[j]) merged[k++]=a[i++]; else merged[k++]=b[j++]; }
    while(i<m) merged[k++]=a[i++];
    while(j<n) merged[k++]=b[j++];
    for(i=0;i<k;i++) printf("%d%s",merged[i],i==k-1?"\n":" ");
    return 0;
}
