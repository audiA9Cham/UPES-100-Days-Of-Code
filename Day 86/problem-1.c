/*
Question: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char operation[20];
    long long a, b;
    enum Choice choice;

    if (scanf("%19s %lld %lld", operation, &a, &b) != 3)
        return 1;

    if (strcmp(operation, "ADD") == 0)
        choice = ADD;
    else if (strcmp(operation, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(operation, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        puts("Invalid choice");
        return 0;
    }

    switch (choice) {
        case ADD: printf("%lld\n", a + b); break;
        case SUBTRACT: printf("%lld\n", a - b); break;
        case MULTIPLY: printf("%lld\n", a * b); break;
    }

    return 0;
}
