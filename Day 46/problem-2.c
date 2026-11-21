/*
Question: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int count[26]={0},i;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    for(i=0;s[i] && s[i]!='\n';i++) if(s[i]>='a'&&s[i]<='z') count[s[i]-'a']++;
    for(i=0;s[i] && s[i]!='\n';i++) if(s[i]>='a'&&s[i]<='z'&&count[s[i]-'a']>1) {
        printf("%c\n",s[i]); return 0;
    }
    puts("No repeating lowercase alphabet");
    return 0;
}
