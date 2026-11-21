/*
Question: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    long long n, x;
    long double total, root;

    if (scanf("%lld", &n) != 1 || n < 1)
        return 1;

    total = (long double)n * ((long double)n + 1.0L) / 2.0L;
    root = sqrtl(total);
    x = (long long)(root + 0.5L);

    if ((long double)x * (long double)x == total)
        printf("%lld\n", x);
    else
        puts("-1");

    return 0;
}
