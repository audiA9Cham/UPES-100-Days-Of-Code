/*
Question: Delete an element from an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],pos,i;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&pos)!=1 || pos<0 || pos>=n) return 1;
    for(i=pos;i<n-1;i++) a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
