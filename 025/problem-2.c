/*
Question: Write a program to print the following pattern:
*****
 ****
  ***
   **
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
    for(i=0;i<5;i++) { for(j=0;j<i;j++) putchar(' '); for(j=0;j<5-i;j++) putchar('*'); putchar('\n'); }
    return 0;
}
