/*
Question: Count vowels and consonants in a string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int i,v=0,c=0;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    for(i=0;s[i] && s[i]!='\n';i++) if(isalpha((unsigned char)s[i])) {
        char ch=(char)tolower((unsigned char)s[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++; else c++;
    }
    printf("Vowels=%d, Consonants=%d\n",v,c);
    return 0;
}
