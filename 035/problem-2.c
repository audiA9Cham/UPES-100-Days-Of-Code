/*
Question: Rotate an array to the right by k positions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],result[1000],k,i;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&k)!=1) return 1;
    k=((k%n)+n)%n;
    for(i=0;i<n;i++) result[(i+k)%n]=a[i];
    for(i=0;i<n;i++) printf("%d%s",result[i],i==n-1?"\n":" ");
    return 0;
}
