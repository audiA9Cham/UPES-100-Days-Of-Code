/*
Question: Create Employee structure with nested Date structure for joining date and print details.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main(void) {
    struct Employee employee;
    char line[256];
    char *name;

    if (fgets(line, sizeof line, stdin) == NULL)
        return 1;

    /* Accept both the sample's labelled format and plain whitespace input. */
    if (sscanf(line,
               " Employee: %49[^|] | ID: %d | Joining Date: %d %d %d",
               employee.name, &employee.id,
               &employee.joiningDate.day,
               &employee.joiningDate.month,
               &employee.joiningDate.year) != 5) {
        if (sscanf(line, " %49s %d %d %d %d",
                   employee.name, &employee.id,
                   &employee.joiningDate.day,
                   &employee.joiningDate.month,
                   &employee.joiningDate.year) != 5)
            return 1;
    }

    /* Trim whitespace around a name captured before the first pipe. */
    name = employee.name;
    while (isspace((unsigned char)*name))
        ++name;
    if (name != employee.name)
        memmove(employee.name, name, strlen(name) + 1);
    name = employee.name + strlen(employee.name);
    while (name > employee.name && isspace((unsigned char)name[-1]))
        *--name = '\0';

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           employee.name, employee.id,
           employee.joiningDate.day,
           employee.joiningDate.month,
           employee.joiningDate.year);
    return 0;
}
