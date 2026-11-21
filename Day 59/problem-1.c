/*
Question: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],k,i; long long sum=0,best=LLONG_MIN;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&k)!=1 || k<1 || k>n) return 1;
    for(i=0;i<k;i++) sum+=a[i];
    best=sum;
    for(i=k;i<n;i++) { sum+=a[i]-a[i-k]; if(sum>best) best=sum; }
    printf("%lld\n",best);
    return 0;
}
