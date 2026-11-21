/*
Question: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char date[100]; int day,month,year;
    const char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    if(scanf("%99s",date)!=1) return 1;
    if(sscanf(date,"%d/%d/%d",&day,&month,&year)!=3||month<1||month>12) return 1;
    printf("%02d-%s-%04d\n",day,months[month-1],year);
    return 0;
}
