/*
Question: Write a program to print all factors of a given number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i,first=1;
    if(scanf("%d",&n)!=1 || n<=0) return 1;
    for(i=1;i<=n;i++) if(n%i==0) {
        if(!first) putchar(' ');
        printf("%d",i); first=0;
    }
    putchar('\n');
    return 0;
}
