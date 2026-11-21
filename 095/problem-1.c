/*
Question: Return a structure containing top student's details from a function.
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

struct Student topStudent(struct Student students[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++)
        if (students[i].marks > students[top].marks) top = i;

    return students[top];
}

int main(void) {
    struct Student students[100], topper;
    int n, i;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    for (i = 0; i < n; i++) {
        if (scanf("%49s %d %f", students[i].name,
                  &students[i].roll_no, &students[i].marks) != 3) return 1;
    }

    topper = topStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n",
           topper.name, topper.roll_no, topper.marks);
    return 0;
}
