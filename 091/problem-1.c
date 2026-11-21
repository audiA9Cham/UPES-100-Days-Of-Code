/*
Question: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student student;

    if (scanf("%49s %d %f", student.name,
              &student.roll_no, &student.marks) != 3) return 1;

    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           student.name, student.roll_no, student.marks);
    return 0;
}
