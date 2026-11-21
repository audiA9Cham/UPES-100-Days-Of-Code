/*
Question: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    FILE *file;
    int ch, vowels = 0, consonants = 0;

    file = fopen("text.txt", "r");
    if (file == NULL) {
        puts("Cannot open text.txt");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            ch = tolower((unsigned char)ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
