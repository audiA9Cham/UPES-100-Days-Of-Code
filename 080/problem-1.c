/*
Question: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main(void) {
    FILE *file;
    struct Student student;
    int n, i;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    file = fopen("students.txt", "w");
    if (file == NULL) return 1;

    for (i = 0; i < n; i++) {
        if (scanf("%99s %d %f", student.name, &student.roll, &student.marks) != 3) {
            fclose(file);
            return 1;
        }
        fprintf(file, "%s %d %.2f\n", student.name, student.roll, student.marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) return 1;

    while (fscanf(file, "%99s %d %f", student.name,
                  &student.roll, &student.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               student.name, student.roll, student.marks);
    }

    fclose(file);
    return 0;
}
