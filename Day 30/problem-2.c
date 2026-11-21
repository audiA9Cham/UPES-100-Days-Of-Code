/*
Question: Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,p=0,neg=0,z=0;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) { if(scanf("%d",&a[i])!=1) return 1; if(a[i]>0)p++; else if(a[i]<0)neg++; else z++; }
    printf("Positive=%d, Negative=%d, Zero=%d\n",p,neg,z);
    return 0;
}
