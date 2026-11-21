/*
Question: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000],t[1000]; int count[26]={0},i;
    if(fgets(s,sizeof(s),stdin)==NULL || fgets(t,sizeof(t),stdin)==NULL) return 1;
    s[strcspn(s,"\n")]='\0'; t[strcspn(t,"\n")]='\0';
    for(i=0;s[i];i++) if(s[i]>='a'&&s[i]<='z') count[s[i]-'a']++;
    for(i=0;t[i];i++) if(t[i]>='a'&&t[i]<='z') count[t[i]-'a']--;
    for(i=0;i<26;i++) if(count[i]!=0) { puts("Not Anagram"); return 0; }
    puts("Anagram");
    return 0;
}
