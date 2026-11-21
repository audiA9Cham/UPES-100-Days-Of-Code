/*
Question: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    FILE *file;
    int number, count = 0;
    long long sum = 0;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        puts("Cannot open numbers.txt");
        return 1;
    }

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }
    fclose(file);

    if (count == 0) {
        puts("No numbers found");
        return 0;
    }

    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
