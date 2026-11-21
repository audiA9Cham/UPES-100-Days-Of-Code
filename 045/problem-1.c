/*
Question: Count frequency of a given character in a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000],ch; int i,count=0;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    s[strcspn(s,"\n")]='\0';
    if(scanf(" %c",&ch)!=1) return 1;
    for(i=0;s[i];i++) if(s[i]==ch) count++;
    printf("%d\n",count);
    return 0;
}
