/*
Question: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
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
    for(i=1;i<=n;i++) sum+=(double)(2*i)/(4*i-1);
    printf("Approximate sum: %.2f\n",sum);
    return 0;
}
