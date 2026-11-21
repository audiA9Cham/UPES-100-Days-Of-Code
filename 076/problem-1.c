/*
Question: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char filename[256], line[1000];
    FILE *file;

    if (scanf("%255s", filename) != 1) return 1;

    file = fopen(filename, "r");
    if (file == NULL) {
        puts("Error: File does not exist!");
        return 0;
    }

    puts("File opened successfully.");
    while (fgets(line, sizeof(line), file) != NULL)
        printf("%s", line);

    fclose(file);
    return 0;
}
