/*
Question: Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char a[1000],b[1000],joined[2000]; int n,i,rotation=0;
    if(fgets(a,sizeof(a),stdin)==NULL || fgets(b,sizeof(b),stdin)==NULL) return 1;
    a[strcspn(a,"\n")]='\0'; b[strcspn(b,"\n")]='\0';
    n=(int)strlen(a);
    if(n==(int)strlen(b)) {
        strcpy(joined,a); strcat(joined,a);
        for(i=0;i<n;i++) if(strncmp(joined+i,b,(size_t)n)==0) rotation=1;
    }
    puts(rotation?"Rotation":"Not rotation");
    return 0;
}
