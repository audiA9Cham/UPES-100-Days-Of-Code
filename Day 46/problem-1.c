/*
Question: Remove all vowels from a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int i,j=0;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    for(i=0;s[i] && s[i]!='\n';i++) {
        char ch=(char)tolower((unsigned char)s[i]);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u') s[j++]=s[i];
    }
    s[j]='\0'; puts(s);
    return 0;
}
