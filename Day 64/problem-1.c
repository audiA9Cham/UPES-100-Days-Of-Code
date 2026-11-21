/*
Question: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int last[256],i,start=0,best=0,length;
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    s[strcspn(s,"\n")]='\0';
    for(i=0;i<256;i++) last[i]=-1;
    for(i=0;s[i];i++) {
        unsigned char ch=(unsigned char)s[i];
        if(last[ch]>=start) start=last[ch]+1;
        last[ch]=i;
        length=i-start+1;
        if(length>best) best=length;
    }
    printf("%d\n",best);
    return 0;
}
