/*
Question: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],k,i,j,temp;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    if(scanf("%d",&k)!=1 || k<1 || k>n) return 1;
    for(i=0;i<n-1;i++) for(j=0;j<n-1-i;j++) if(a[j]>a[j+1]) {
        temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
    }
    printf("%d\n",a[k-1]);
    return 0;
}
