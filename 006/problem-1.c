/*
Question: Write a program to input an integer and check whether it is even or odd using if–else.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d",&n)!=1) return 1;
    if(n%2==0) printf("%d is even\n",n); else printf("%d is odd\n",n);
    return 0;
}
