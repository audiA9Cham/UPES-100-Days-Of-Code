/*
Question: Write a program to print numbers from 1 to n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n,i;
    if(scanf("%d",&n)!=1 || n<1) return 1;
    for(i=1;i<=n;i++) printf("%d%s",i,i==n?"\n":" ");
    return 0;
}
