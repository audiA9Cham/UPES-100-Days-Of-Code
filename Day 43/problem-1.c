/*
Question: Reverse a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000],temp; int i,n;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    s[strcspn(s,"\n")]='\0'; n=(int)strlen(s);
    for(i=0;i<n/2;i++) { temp=s[i]; s[i]=s[n-1-i]; s[n-1-i]=temp; }
    puts(s);
    return 0;
}
