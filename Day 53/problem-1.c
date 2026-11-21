/*
Question: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,pivot=-1; long long total=0,left=0;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) { if(scanf("%d",&a[i])!=1) return 1; total+=a[i]; }
    for(i=0;i<n;i++) {
        if(left==total-left-a[i]) { pivot=i; break; }
        left+=a[i];
    }
    printf("%d\n",pivot);
    return 0;
}
