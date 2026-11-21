/*
Question: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,j,previous;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    for(i=0;i<n;i++) {
        previous=-1;
        for(j=i-1;j>=0;j--) if(a[j]>a[i]) { previous=a[j]; break; }
        printf("%d%s",previous,i==n-1?"\n":", ");
    }
    return 0;
}
