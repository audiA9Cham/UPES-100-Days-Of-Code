/*
Question: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char input[20];
    enum Role role;

    if (scanf("%19s", input) != 1) return 1;

    if (strcmp(input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else if (strcmp(input, "GUEST") == 0) role = GUEST;
    else {
        puts("Invalid role");
        return 0;
    }

    switch (role) {
        case ADMIN: puts("Welcome Admin!"); break;
        case USER: puts("Welcome User!"); break;
        case GUEST: puts("Welcome Guest!"); break;
    }
    return 0;
}
