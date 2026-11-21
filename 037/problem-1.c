/*
Question: Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int r,c,a[20][20],rowSum[20]={0},i,j;
    if(scanf("%d %d",&r,&c)!=2 || r<1 || c<1 || r>20 || c>20) return 1;
    for(i=0;i<r;i++) for(j=0;j<c;j++) { if(scanf("%d",&a[i][j])!=1) return 1; rowSum[i]+=a[i][j]; }
    for(i=0;i<r;i++) printf("%d%s",rowSum[i],i==r-1?"\n":" ");
    return 0;
}
