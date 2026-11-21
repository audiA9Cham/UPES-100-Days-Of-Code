/*
Question: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *file;
    char line[1000];
    long endPosition;
    int lastCharacter;

    if (fgets(line, sizeof(line), stdin) == NULL)
        return 1;
    line[strcspn(line, "\n")] = '\0';

    file = fopen("data.txt", "a+");
    if (file == NULL) {
        puts("Unable to open data.txt");
        return 1;
    }

    if (fseek(file, 0, SEEK_END) != 0) {
        fclose(file);
        return 1;
    }

    endPosition = ftell(file);
    if (endPosition < 0) {
        fclose(file);
        return 1;
    }

    if (endPosition > 0) {
        if (fseek(file, -1L, SEEK_END) != 0) {
            fclose(file);
            return 1;
        }
        lastCharacter = fgetc(file);
        if (fseek(file, 0, SEEK_END) != 0) {
            fclose(file);
            return 1;
        }
        if (lastCharacter != '\n' && lastCharacter != '\r') {
            if (fputc('\n', file) == EOF) {
                fclose(file);
                return 1;
            }
        }
    }

    if (fputs(line, file) == EOF || fputc('\n', file) == EOF) {
        fclose(file);
        return 1;
    }

    if (fclose(file) != 0)
        return 1;

    puts("File updated successfully with appended text.");
    return 0;
}
