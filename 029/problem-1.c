/*
Question: Find the sum of array elements.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i; long long sum=0;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) { if(scanf("%d",&a[i])!=1) return 1; sum+=a[i]; }
    printf("%lld\n",sum);
    return 0;
}
