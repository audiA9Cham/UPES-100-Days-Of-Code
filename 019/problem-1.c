/*
Question: Write a program to find the LCM of two numbers.
*/

#include <stdio.h>
#include <limits.h>

static unsigned long long magnitude(long long value) {
    return value < 0 ? 0ULL - (unsigned long long)value : (unsigned long long)value;
}

int main(void) {
    long long inputA, inputB;
    unsigned long long a, b, x, y, remainder, gcd, reduced;

    if (scanf("%lld %lld", &inputA, &inputB) != 2)
        return 1;

    x = magnitude(inputA);
    y = magnitude(inputB);

    if (x == 0 || y == 0) {
        puts("0");
        return 0;
    }

    a = x;
    b = y;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;
    reduced = x / gcd;

    if (reduced > ULLONG_MAX / y) {
        puts("LCM overflow");
        return 1;
    }

    printf("%llu\n", reduced * y);
    return 0;
}
