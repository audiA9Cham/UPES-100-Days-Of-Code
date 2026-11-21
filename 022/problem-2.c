/*
Question: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i; double sum=0.0;
    if(scanf("%d",&n)!=1 || n<1) return 1;
    sum=1.0;
    for(i=2;i<=n;i++) sum+=(double)(2*i-1)/(2*i);
    printf("Approximate sum: %.1f\n",sum);
    return 0;
}
