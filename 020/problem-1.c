/*
Question: Write a program to find the product of odd digits of a number.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char number[1000], product[10000] = "1";
    int oddDigits[1000], count = 0, i, j, carry, digit, length;

    if (scanf("%999s", number) != 1)
        return 1;

    for (i = 0; number[i] != '\0'; ++i) {
        if ((number[i] == '-' || number[i] == '+') && i == 0)
            continue;
        if (!isdigit((unsigned char)number[i])) {
            puts("Invalid number");
            return 1;
        }

        digit = number[i] - '0';
        if (digit % 2 == 1) {
            oddDigits[count++] = digit;
            length = (int)strlen(product);
            carry = 0;
            for (j = length - 1; j >= 0; --j) {
                int value = (product[j] - '0') * digit + carry;
                product[j] = (char)('0' + value % 10);
                carry = value / 10;
            }
            while (carry > 0) {
                if (length + 1 >= (int)sizeof(product))
                    return 1;
                memmove(product + 1, product, (size_t)length + 1);
                product[0] = (char)('0' + carry % 10);
                carry /= 10;
                ++length;
            }
        }
    }

    if (count == 0) {
        puts("1 (no odd digits, assume 1)");
        return 0;
    }

    printf("%s (", product);
    for (i = 0; i < count; ++i) {
        if (i > 0)
            putchar('*');
        printf("%d", oddDigits[i]);
    }
    puts(")");
    return 0;
}
