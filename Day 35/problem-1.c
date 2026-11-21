/*
Question: Find the second largest element in an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,largest=INT_MIN,second=INT_MIN;
    if(scanf("%d",&n)!=1 || n<2 || n>1000) return 1;
    for(i=0;i<n;i++) {
        if(scanf("%d",&a[i])!=1) return 1;
        if(a[i]>largest) { second=largest; largest=a[i]; }
        else if(a[i]<largest && a[i]>second) second=a[i];
    }
    if(second==INT_MIN) puts("No second largest distinct element"); else printf("%d\n",second);
    return 0;
}
