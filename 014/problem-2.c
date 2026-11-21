/*
Question: Write a program to print the product of even numbers from 1 to n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int n, i, first = 1;
    unsigned long long product = 1;

    if (scanf("%d", &n) != 1 || n < 0) return 1;

    for (i = 2; i <= n; i += 2)
        product *= (unsigned long long)i;

    printf("%llu (", product);
    for (i = 2; i <= n; i += 2) {
        if (!first) printf(" * ");
        printf("%d", i);
        first = 0;
    }

    if (first) printf("no even numbers");
    puts(")");
    return 0;
}