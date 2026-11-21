/*
Question: Write a function that accepts a structure as parameter and prints its members.
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

void printStudent(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           student.name, student.roll_no, student.marks);
}

int main(void) {
    struct Student student;

    if (scanf("%49s %d %f", student.name,
              &student.roll_no, &student.marks) != 3) return 1;

    printStudent(student);
    return 0;
}
