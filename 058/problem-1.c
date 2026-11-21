/*
Question: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000]; long long left[1000],right[1000]; int i;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    left[0]=1;
    for(i=1;i<n;i++) left[i]=left[i-1]*a[i-1];
    right[n-1]=1;
    for(i=n-2;i>=0;i--) right[i]=right[i+1]*a[i+1];
    putchar('[');
    for(i=0;i<n;i++) printf("%lld%s",left[i]*right[i],i==n-1?"]\n":",");
    return 0;
}
