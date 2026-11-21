/*
Question: Check if a string is a palindrome.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int i,n,ok=1;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    s[strcspn(s,"\n")]='\0'; n=(int)strlen(s);
    for(i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) ok=0;
    puts(ok?"Palindrome":"Not palindrome");
    return 0;
}
