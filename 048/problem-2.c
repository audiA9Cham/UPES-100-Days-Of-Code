/*
Question: Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int i=0,j,k;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    while(s[i] && s[i]!='\n') {
        if(s[i]==' ') { putchar(' '); i++; continue; }
        j=i;
        while(s[i] && s[i]!=' ' && s[i]!='\n') i++;
        for(k=i-1;k>=j;k--) putchar(s[k]);
    }
    putchar('\n');
    return 0;
}
