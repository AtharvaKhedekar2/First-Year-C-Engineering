/*
 * Experiment No. 10
 * Aim: Write a C program for sorting numbers using Bubble Sort.
 */

#include <stdio.h>

int main() {
    int a[100], n = 0, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    /* The array can hold at most 100 elements */
    if (n <= 0 || n > 100) {
        printf("Invalid number of elements\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* After each pass, the largest remaining element moves to the end */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            /* Swap neighbouring elements if they are in the wrong order */
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
