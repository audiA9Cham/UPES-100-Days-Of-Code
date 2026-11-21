/*
Question: Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int i,j;
    for(i=0;i<5;i++) { for(j=5-i;j<=5;j++) printf("%d",j); putchar('\n'); }
    return 0;
}
