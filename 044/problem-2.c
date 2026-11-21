/*
Question: Replace spaces with hyphens in a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int i;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    for(i=0;s[i] && s[i]!='\n';i++) if(s[i]==' ') s[i]='-';
    s[i]='\0'; puts(s);
    return 0;
}
