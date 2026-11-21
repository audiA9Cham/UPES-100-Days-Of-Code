/*
Question: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d",&n)!=1 || n<0) return 1;
    printf("%d:%d:%d\n",n/3600,(n%3600)/60,n%60);
    return 0;
}
