/*
Question: Find and print the student with the highest marks.
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
    struct Student students[100];
    int n, i, top = 0;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    for (i = 0; i < n; i++) {
        if (scanf("%49s %d %f", students[i].name,
                  &students[i].roll_no, &students[i].marks) != 3) return 1;
    }

    for (i = 1; i < n; i++)
        if (students[i].marks > students[top].marks) top = i;

    printf("Topper: %s (Marks: %.2f)\n",
           students[top].name, students[top].marks);
    return 0;
}
