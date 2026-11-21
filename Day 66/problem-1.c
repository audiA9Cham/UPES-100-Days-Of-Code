/*
Question: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
*/

#include <stdio.h>

int main(void) {
    int n, a[1000], target, i, j;
    if (scanf("%d", &n) != 1 || n < 2 || n > 1000)
        return 1;
    for (i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1)
            return 1;
    if (scanf("%d", &target) != 1)
        return 1;

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if ((long long)a[i] + a[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    puts("-1 -1");
    return 0;
}
