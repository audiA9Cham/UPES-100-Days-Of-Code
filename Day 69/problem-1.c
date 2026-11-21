/*
Question: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

static size_t hash_int(int value) {
    uint32_t x = (uint32_t)value;
    x ^= x >> 16;
    x *= UINT32_C(0x7feb352d);
    x ^= x >> 15;
    x *= UINT32_C(0x846ca68b);
    x ^= x >> 16;
    return (size_t)x;
}

int main(void) {
    int n, i, value;
    size_t capacity = 1, slot;
    int *keys;
    unsigned char *used;
    int found = 0;

    if (scanf("%d", &n) != 1 || n < 2 || n > 1000000)
        return 1;

    while (capacity < (size_t)n * 2U) {
        if (capacity > SIZE_MAX / 2U)
            return 1;
        capacity *= 2U;
    }

    keys = malloc(capacity * sizeof(*keys));
    used = calloc(capacity, sizeof(*used));
    if (keys == NULL || used == NULL) {
        free(keys);
        free(used);
        return 1;
    }

    for (i = 0; i < n; ++i) {
        if (scanf("%d", &value) != 1) {
            free(keys);
            free(used);
            return 1;
        }

        slot = hash_int(value) & (capacity - 1U);
        while (used[slot] && keys[slot] != value)
            slot = (slot + 1U) & (capacity - 1U);

        if (used[slot]) {
            printf("%d\n", value);
            found = 1;
            break;
        }

        used[slot] = 1;
        keys[slot] = value;
    }

    if (!found)
        puts("-1");

    free(keys);
    free(used);
    return 0;
}
