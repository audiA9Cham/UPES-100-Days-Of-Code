/*
Question: Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main(void) {
    struct Person person;
    char input[20];

    if (scanf("%19s", input) != 1) return 1;

    if (strcmp(input, "MALE") == 0) person.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) person.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0) person.gender = OTHER;
    else {
        puts("Invalid gender");
        return 0;
    }

    if (person.gender == MALE) puts("Male");
    else if (person.gender == FEMALE) puts("Female");
    else puts("Other");

    return 0;
}
