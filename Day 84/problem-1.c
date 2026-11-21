/*
Question: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[20];
    enum Status status;

    if (scanf("%19s", input) != 1) return 1;

    if (strcmp(input, "SUCCESS") == 0) status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) status = TIMEOUT;
    else {
        puts("Invalid status");
        return 0;
    }

    switch (status) {
        case SUCCESS: puts("Operation successful"); break;
        case FAILURE: puts("Operation failed"); break;
        case TIMEOUT: puts("Operation timed out"); break;
    }
    return 0;
}
