/*
Question: Add two matrices.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int r,c,r2,c2,a[20][20],b[20][20],i,j;
    if(scanf("%d %d",&r,&c)!=2 || r<1 || c<1 || r>20 || c>20) return 1;
    for(i=0;i<r;i++) for(j=0;j<c;j++) if(scanf("%d",&a[i][j])!=1) return 1;
    if(scanf("%d %d",&r2,&c2)!=2 || r2!=r || c2!=c) return 1;
    for(i=0;i<r;i++) for(j=0;j<c;j++) if(scanf("%d",&b[i][j])!=1) return 1;
    for(i=0;i<r;i++) { for(j=0;j<c;j++) printf("%d%s",a[i][j]+b[i][j],j==c-1?"":" "); putchar('\n'); }
    return 0;
}
