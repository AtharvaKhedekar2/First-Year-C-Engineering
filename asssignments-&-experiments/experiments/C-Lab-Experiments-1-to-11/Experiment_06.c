/*
 * Experiment No. 06
 * Aim: Write a C program to print star pattern - Triangle star pattern.
 *
 *  a) *                b) * * * * *
 *     * *                   * * * *
 *     * * *                   * * *
 *     * * * *                   * *
 *     * * * * *                   *
 */

#include <stdio.h>

int main() {
    int i, j, k;

    /* Pattern a): row i has i stars */
    printf("Pattern a)\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* Pattern b): row i has (i - 1) indents, followed by stars from i to 5 */
    printf("\nPattern b)\n");
    for (i = 1; i <= 5; i++) {
        for (k = 1; k < i; k++) {
            printf("  ");
        }
        for (j = i; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
