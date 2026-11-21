/*
Question: Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[20][20],i,j; long long sum=0;
    if(scanf("%d",&n)!=1 || n<1 || n>20) return 1;
    for(i=0;i<n;i++) for(j=0;j<n;j++) if(scanf("%d",&a[i][j])!=1) return 1;
    for(i=0;i<n;i++) sum+=a[i][i];
    printf("%lld\n",sum);
    return 0;
}
