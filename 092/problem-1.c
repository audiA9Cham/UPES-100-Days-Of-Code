/*
Question: Store details of 5 students in an array of structures and print all.
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
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        if (scanf("%49s %d %f", students[i].name,
                  &students[i].roll_no, &students[i].marks) != 3) return 1;
    }

    printf("Name\tRoll\tMarks\n");
    for (i = 0; i < 5; i++)
        printf("%s\t%d\t%.2f\n",
               students[i].name, students[i].roll_no, students[i].marks);

    return 0;
}
