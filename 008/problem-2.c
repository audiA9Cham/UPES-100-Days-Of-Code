/*
Question: Write a program to input three numbers and find the largest among them using if–else.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int a,b,c,m;
    if(scanf("%d %d %d",&a,&b,&c)!=3) return 1;
    m=a; if(b>m)m=b; if(c>m)m=c;
    printf("Largest is %d\n",m);
    return 0;
}
