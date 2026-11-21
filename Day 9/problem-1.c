/*
Question: Write a program to find the roots of a quadratic equation and categorize them.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, discriminant, root1, root2;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0)
        return 1;

    discriminant = b * b - 4.0 * a * c;

    if (discriminant > 0.0) {
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } else if (fabs(discriminant) < 1e-9) {
        root1 = -b / (2.0 * a);
        printf("Roots are real and same: %.2f\n", root1);
    } else {
        puts("Roots are complex");
    }

    return 0;
}
