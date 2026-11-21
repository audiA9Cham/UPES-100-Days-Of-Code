/*
Question: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int i,j;
    for(i=1;i<=5;i++) { for(j=1;j<=2*i-1;j++) putchar('*'); putchar('\n'); }
    for(i=4;i>=1;i--) { for(j=1;j<=2*i-1;j++) putchar('*'); putchar('\n'); }
    return 0;
}
