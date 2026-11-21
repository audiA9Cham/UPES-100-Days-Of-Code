/*
Question: Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char number[1000];
    size_t start = 0, length, i;
    char temp;

    if (scanf("%999s", number) != 1)
        return 1;

    if (number[0] == '-' || number[0] == '+')
        start = 1;

    length = strlen(number);
    if (start == length)
        return 1;

    for (i = start; i < length; ++i) {
        if (!isdigit((unsigned char)number[i]))
            return 1;
    }

    if (length - start > 1) {
        temp = number[start];
        number[start] = number[length - 1];
        number[length - 1] = temp;
    }

    puts(number);
    return 0;
}
