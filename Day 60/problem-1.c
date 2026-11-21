/*
Question: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],k,i,j,mx;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&k)!=1 || k<1 || k>n) return 1;
    for(i=0;i<=n-k;i++) {
        mx=a[i];
        for(j=i+1;j<i+k;j++) if(a[j]>mx) mx=a[j];
        printf("%d%s",mx,i==n-k?"\n":" ");
    }
    return 0;
}
