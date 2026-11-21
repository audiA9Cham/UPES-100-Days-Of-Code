/*
Question: Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char binary[256]; int i;
    if(scanf("%255s",binary)!=1) return 1;
    for(i=0;binary[i];i++) {
        if(binary[i]=='0') binary[i]='1';
        else if(binary[i]=='1') binary[i]='0';
        else { puts("Invalid binary number"); return 0; }
    }
    puts(binary);
    return 0;
}
