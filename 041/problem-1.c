/*
Question: Count characters in a string without using built-in length functions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int length=0;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    while(s[length] && s[length]!='\n') length++;
    printf("%d\n",length);
    return 0;
}
