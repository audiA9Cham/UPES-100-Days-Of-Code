/*
Question: Insert an element in an array at a given position.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1001],pos,x,i;
    if(scanf("%d",&n)!=1 || n<0 || n>=1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d %d",&pos,&x)!=2 || pos<0 || pos>n) return 1;
    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=x; n++;
    for(i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
