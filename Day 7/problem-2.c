/*
Question: Write a program to input a character and check whether it is a vowel or consonant using if–else.
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
    c=(char)tolower((unsigned char)c);
    if(c<'a'||c>'z') printf("Not an alphabet\n");
    else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("Vowel\n");
    else printf("Consonant\n");
    return 0;
}
