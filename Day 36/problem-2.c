/*
Question: Find the sum of all elements in a matrix.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int r,c,a[20][20],i,j; long long sum=0;
    if(scanf("%d %d",&r,&c)!=2 || r<1 || c<1 || r>20 || c>20) return 1;
    for(i=0;i<r;i++) for(j=0;j<c;j++) { if(scanf("%d",&a[i][j])!=1) return 1; sum+=a[i][j]; }
    printf("%lld\n",sum);
    return 0;
}
