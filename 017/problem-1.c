/*
Question: Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,temp,digits=0,sum=0,d,i,power;
    if(scanf("%d",&n)!=1 || n<0) return 1;
    temp=n; do { digits++; temp/=10; } while(temp>0);
    temp=n;
    do {
        d=temp%10; power=1;
        for(i=0;i<digits;i++) power*=d;
        sum+=power; temp/=10;
    } while(temp>0);
    puts(sum==n?"Armstrong":"Not Armstrong");
    return 0;
}
