/*
Question: Search for an element in an array using linear search.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],x,i,found=-1;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&x)!=1) return 1;
    for(i=0;i<n;i++) if(a[i]==x) { found=i; break; }
    if(found>=0) printf("Found at index %d\n",found); else puts("-1");
    return 0;
}
