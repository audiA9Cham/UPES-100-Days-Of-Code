/*
Question: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char c;
    if(scanf(" %c",&c)!=1) return 1;
    if(c>='A'&&c<='Z') printf("Uppercase alphabet\n");
    else if(c>='a'&&c<='z') printf("Lowercase alphabet\n");
    else if(c>='0'&&c<='9') printf("Digit\n");
    else printf("Special character\n");
    return 0;
}
