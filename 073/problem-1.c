/*
Question: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    FILE *file;
    int ch, characters = 0, words = 0, lines = 0;
    int inWord = 0, last = -1;

    file = fopen("sample.txt", "r");
    if (file == NULL) {
        puts("Cannot open sample.txt");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') lines++;

        if (isspace((unsigned char)ch))
            inWord = 0;
        else if (!inWord) {
            words++;
            inWord = 1;
        }
        last = ch;
    }

    if (characters > 0 && last != '\n') lines++;
    fclose(file);

    printf("Characters: %d\nWords: %d\nLines: %d\n",
           characters, words, lines);
    return 0;
}
