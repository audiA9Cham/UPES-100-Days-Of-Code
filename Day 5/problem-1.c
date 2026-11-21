/*
Question: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    double principal, rate, simpleInterest, amount;
    int time, i;

    if (scanf("%lf %lf %d", &principal, &rate, &time) != 3 || time < 0)
        return 1;

    simpleInterest = principal * rate * time / 100.0;
    amount = principal;

    for (i = 0; i < time; i++)
        amount *= 1.0 + rate / 100.0;

    printf("Simple Interest=%.0f, Compound Interest=%.6g\n",
           simpleInterest, amount - principal);
    return 0;
}