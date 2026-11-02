/*
 * Experiment No. 11
 * Aim: Write a C program for binary search.
 */

#include <stdio.h>

int main() {
    int a[100], n = 0, i, key;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* The array can hold at most 100 elements */
    if (n <= 0 || n > 100) {
        printf("Invalid number of elements\n");
        return 0;
    }

    /* Binary search works only on a sorted array */
    printf("Enter elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    /* Check the middle element and discard the half that cannot contain key */
    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (key > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
