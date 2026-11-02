/*
 * Experiment No. 09
 * Aim: Write a C program to find multiplication of two matrices and
 *      transpose of the resultant matrix.
 */

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], t[10][10];
    int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    /* The arrays can hold at most 10 rows and 10 columns */
    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0 ||
        r1 > 10 || c1 > 10 || r2 > 10 || c2 > 10) {
        printf("Invalid matrix dimensions\n");
        return 0;
    }

    /* Columns of the first matrix must equal rows of the second matrix */
    if (c1 != r2) {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    /* Multiplication: c[i][j] is the sum of a[i][k] * b[k][j] */
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    /* Transpose: rows of c become the columns of t */
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            t[j][i] = c[i][j];
        }
    }

    printf("\nTranspose of the resultant matrix:\n");
    for (i = 0; i < c2; i++) {
        for (j = 0; j < r1; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
