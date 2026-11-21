/*
Question: Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char s[1000]; int count[10]={0},i,best=0;
    if(scanf("%999s",s)!=1) return 1;
    for(i=0;s[i];i++) if(s[i]>='0'&&s[i]<='9') count[s[i]-'0']++;
    for(i=1;i<10;i++) if(count[i]>count[best]) best=i;
    printf("%d\n",best);
    return 0;
}
