/*
Question: Show that enums store integers by printing assigned values.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",
           SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
