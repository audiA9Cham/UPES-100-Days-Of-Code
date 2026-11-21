/*
Question: Write a program to check if a number is a strong number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,temp,sum=0,d,i,f;
    if(scanf("%d",&n)!=1 || n<0) return 1;
    temp=n;
    do {
        d=temp%10; f=1;
        for(i=2;i<=d;i++) f*=i;
        sum+=f; temp/=10;
    } while(temp>0);
    puts(sum==n?"Strong number":"Not strong number");
    return 0;
}
