/*
Question: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,a[1000],i,candidate=0,count=0,occurrences=0;
    if(scanf("%d",&n)!=1 || n<1 || n>1000) return 1;
    for(i=0;i<n;i++) {
        if(scanf("%d",&a[i])!=1) return 1;
        if(count==0) { candidate=a[i]; count=1; }
        else if(a[i]==candidate) count++;
        else count--;
    }
    for(i=0;i<n;i++) if(a[i]==candidate) occurrences++;
    printf("%d\n",occurrences>n/2?candidate:-1);
    return 0;
}
