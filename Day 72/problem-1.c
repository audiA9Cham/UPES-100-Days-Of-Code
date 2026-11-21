/*
Question: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    FILE *file;
    char line[1000];

    file = fopen("info.txt", "r");
    if (file == NULL) {
        puts("Error: File does not exist!");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
        printf("%s", line);

    fclose(file);
    return 0;
}
