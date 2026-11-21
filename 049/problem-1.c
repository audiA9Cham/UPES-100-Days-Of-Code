/*
Question: Print the initials of a name.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char name[1000]; int i,start=1;
    if(fgets(name,sizeof(name),stdin)==NULL) return 1;
    for(i=0;name[i] && name[i]!='\n';i++) {
        if(!isspace((unsigned char)name[i]) && start) {
            printf("%c.",(char)toupper((unsigned char)name[i]));
            start=0;
        }
        if(isspace((unsigned char)name[i])) start=1;
    }
    putchar('\n');
    return 0;
}
