/*
Question: Print all sub-strings of a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int i,j,k,first=1;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i];i++) for(j=i;s[j];j++) {
        if(!first) putchar(',');
        for(k=i;k<=j;k++) putchar(s[k]);
        first=0;
    }
    putchar('\n');
    return 0;
}
