/*
Question: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY
};

int main(void) {
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };
    enum Day day;

    for (day = SUNDAY; day <= SATURDAY; day++)
        printf("%s = %d\n", names[day], day);

    return 0;
}
