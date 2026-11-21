/*
Question: Write a program to check if a number is a palindrome.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    long long n,temp,reverse=0;
    if(scanf("%lld",&n)!=1) return 1;
    if(n<0) { puts("Not palindrome"); return 0; }
    temp=n;
    while(temp>0) { reverse=reverse*10+temp%10; temp/=10; }
    puts(reverse==n?"Palindrome":"Not palindrome");
    return 0;
}
