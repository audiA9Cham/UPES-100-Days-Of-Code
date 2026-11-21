/*
Question: Write a program to take a string input. Change it to sentence case.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char text[1000];
    int i, newWord = 1;

    if (fgets(text, sizeof(text), stdin) == NULL) return 1;

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (isalpha((unsigned char)text[i])) {
            if (newWord)
                text[i] = (char)toupper((unsigned char)text[i]);
            else
                text[i] = (char)tolower((unsigned char)text[i]);
            newWord = 0;
        } else {
            newWord = isspace((unsigned char)text[i]);
        }
    }
    text[i] = '\0';
    puts(text);
    return 0;
}
