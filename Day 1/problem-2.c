/*
Question: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("Sum=%d, Diff=%d, Product=%d", a + b, a - b, a * b);

    if (b != 0) {
        printf(", Quotient=%d\n", a / b);
    } else {
        printf(", Quotient=Undefined\n");
    }

    return 0;
}