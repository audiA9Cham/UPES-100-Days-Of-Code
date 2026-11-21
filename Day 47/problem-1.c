/*
Question: Check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char a[1000],b[1000]; int count[256]={0},i;
    if(fgets(a,sizeof(a),stdin)==NULL || fgets(b,sizeof(b),stdin)==NULL) return 1;
    a[strcspn(a,"\n")]='\0'; b[strcspn(b,"\n")]='\0';
    for(i=0;a[i];i++) count[(unsigned char)a[i]]++;
    for(i=0;b[i];i++) count[(unsigned char)b[i]]--;
    for(i=0;i<256;i++) if(count[i]!=0) { puts("Not anagrams"); return 0; }
    puts("Anagrams");
    return 0;
}
