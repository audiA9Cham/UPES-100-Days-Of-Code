/*
Question: Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>

static unsigned long long magnitude(long long value) {
    return value < 0 ? 0ULL - (unsigned long long)value : (unsigned long long)value;
}

int main(void) {
    long long inputA, inputB;
    unsigned long long a, b, remainder;

    if (scanf("%lld %lld", &inputA, &inputB) != 2)
        return 1;

    a = magnitude(inputA);
    b = magnitude(inputB);

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("%llu\n", a);
    return 0;
}
