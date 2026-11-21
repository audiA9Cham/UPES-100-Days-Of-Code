/*
Question: Write a program to display the month name and number of days using switch-case for a given month number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int m,days;
    const char *names[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    if(scanf("%d",&m)!=1) return 1;
    if(m<1||m>12) { puts("Invalid month"); return 0; }
    if(m==2) days=28;
    else if(m==4||m==6||m==9||m==11) days=30;
    else days=31;
    printf("%s, %d days\n",names[m],days);
    return 0;
}
