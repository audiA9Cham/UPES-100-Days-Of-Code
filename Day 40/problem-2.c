/*
Question: Multiply two matrices.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int r1,c1,r2,c2,a[20][20],b[20][20],i,j,k,sum;
    if(scanf("%d %d",&r1,&c1)!=2 || r1<1 || c1<1 || r1>20 || c1>20) return 1;
    for(i=0;i<r1;i++) for(j=0;j<c1;j++) if(scanf("%d",&a[i][j])!=1) return 1;
    if(scanf("%d %d",&r2,&c2)!=2 || c1!=r2 || r2>20 || c2>20) return 1;
    for(i=0;i<r2;i++) for(j=0;j<c2;j++) if(scanf("%d",&b[i][j])!=1) return 1;
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            sum=0; for(k=0;k<c1;k++) sum+=a[i][k]*b[k][j];
            printf("%d%s",sum,j==c2-1?"":" ");
        }
        putchar('\n');
    }
    return 0;
}
