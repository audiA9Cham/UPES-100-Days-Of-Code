/*
Question: Write a program to check if a number is prime.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i,prime=1;
    if(scanf("%d",&n)!=1) return 1;
    if(n<2) prime=0;
    for(i=2;i*i<=n && prime;i++) if(n%i==0) prime=0;
    puts(prime?"Prime":"Not prime");
    return 0;
}
