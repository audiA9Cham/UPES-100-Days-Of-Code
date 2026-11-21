/*
Question: Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1001],x,i,pos=0;
    if(scanf("%d",&n)!=1 || n<1 || n>=1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&x)!=1) return 1;
    while(pos<n && a[pos]<x) pos++;
    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=x; n++;
    for(i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
