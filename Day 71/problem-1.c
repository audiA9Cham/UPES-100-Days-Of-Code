/*
Question: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    char name[100];
    int age;
    FILE *file;

    if (scanf("%99s %d", name, &age) != 2) return 1;

    file = fopen("info.txt", "w");
    if (file == NULL) {
        puts("Unable to create info.txt");
        return 1;
    }

    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    puts("File created successfully! Data written to info.txt");
    return 0;
}
