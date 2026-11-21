/*
Question: Find the longest word in a sentence.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char line[1000],word[1000],longest[1000]="";
    int i=0,j,max=0;
    if(fgets(line,sizeof(line),stdin)==NULL) return 1;
    while(line[i]) {
        while(line[i] && isspace((unsigned char)line[i])) i++;
        j=0;
        while(line[i] && !isspace((unsigned char)line[i]) && j<999) word[j++]=line[i++];
        word[j]='\0';
        if(j>max) { max=j; strcpy(longest,word); }
    }
    puts(longest);
    return 0;
}
