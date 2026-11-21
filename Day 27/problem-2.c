/*
Question: Write a program to print the following pattern:

   *
  ***
 *****
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
    for(i=0;i<4;i++) { for(j=0;j<3-i;j++) putchar(' '); for(j=0;j<2*i+1;j++) putchar('*'); putchar('\n'); }
    for(i=2;i>=0;i--) { for(j=0;j<3-i;j++) putchar(' '); for(j=0;j<2*i+1;j++) putchar('*'); putchar('\n'); }
    return 0;
}
