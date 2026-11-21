/*
Question: Count even and odd numbers in an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,even=0,odd=0;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) { if(scanf("%d",&a[i])!=1) return 1; if(a[i]%2==0) even++; else odd++; }
    printf("Even=%d, Odd=%d\n",even,odd);
    return 0;
}
