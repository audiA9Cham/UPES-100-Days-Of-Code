/*
Question: Merge two arrays.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,m,a[1000],b[1000],i;
    if(scanf("%d",&n)!=1 || n<0 || n>500) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&m)!=1 || m<0 || n+m>1000) return 1;
    for(i=0;i<m;i++) if(scanf("%d",&b[i])!=1) return 1;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    for(i=0;i<m;i++) printf("%d%s",b[i],i==m-1?"\n":" ");
    if(m==0) putchar('\n');
    return 0;
}
