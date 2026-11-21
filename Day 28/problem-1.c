/*
Question: Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i,j,prime;
    if(scanf("%d",&n)!=1) return 1;
    for(i=2;i<=n;i++) {
        prime=1;
        for(j=2;j*j<=i;j++) if(i%j==0) { prime=0; break; }
        if(prime) printf("%d ",i);
    }
    putchar('\n');
    return 0;
}
