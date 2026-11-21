/*
Question: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *inputFile, *outputFile;
    int ch, failed = 0;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        puts("Cannot open input.txt");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        fclose(inputFile);
        puts("Cannot open output.txt");
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        if (fputc(toupper((unsigned char)ch), outputFile) == EOF) {
            failed = 1;
            break;
        }
    }

    if (ferror(inputFile))
        failed = 1;
    if (fclose(inputFile) != 0)
        failed = 1;
    if (fclose(outputFile) != 0)
        failed = 1;

    if (failed) {
        puts("File conversion failed");
        return 1;
    }

    puts("Conversion completed. Output written to output.txt");
    return 0;
}
