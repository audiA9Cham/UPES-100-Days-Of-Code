/*
Question: Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char line[1000],word[50][100]; int n=0,i=0,j;
    if(fgets(line,sizeof(line),stdin)==NULL) return 1;
    while(line[i]) {
        while(isspace((unsigned char)line[i])) i++;
        if(!line[i]||line[i]=='\n') break;
        j=0;
        while(line[i]&&!isspace((unsigned char)line[i])&&j<99) word[n][j++]=line[i++];
        word[n][j]='\0';
        if(n<49) n++; else break;
    }
    if(n==0) return 0;
    for(i=0;i<n-1;i++) printf("%c.",(char)toupper((unsigned char)word[i][0]));
    printf(" %s\n",word[n-1]);
    return 0;
}
