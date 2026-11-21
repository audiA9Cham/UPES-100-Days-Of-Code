/*
Question: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i; long long current,best;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    current=best=a[0];
    for(i=1;i<n;i++) {
        if(current<0) current=a[i]; else current+=a[i];
        if(current>best) best=current;
    }
    printf("%lld\n",best);
    return 0;
}
