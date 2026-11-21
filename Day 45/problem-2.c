/*
Question: Toggle case of each character in a string.
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
    for(i=0;s[i] && s[i]!='\n';i++) {
        if(s[i]>='a'&&s[i]<='z') s[i]=(char)(s[i]-'a'+'A');
        else if(s[i]>='A'&&s[i]<='Z') s[i]=(char)(s[i]-'A'+'a');
    }
    s[i]='\0'; puts(s);
    return 0;
}
