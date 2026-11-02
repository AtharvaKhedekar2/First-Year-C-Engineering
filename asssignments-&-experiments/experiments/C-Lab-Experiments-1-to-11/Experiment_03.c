/*
 * Experiment No. 03
 * Aim: To write a C program to find the largest of three numbers using
 *      nested if-else statements.
 */

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Compare a with b first, then compare the bigger one with c */
    if (a >= b) {
        if (a >= c) {
            printf("%d is the largest\n", a);
        } else {
            printf("%d is the largest\n", c);
        }
    } else {
        if (b >= c) {
            printf("%d is the largest\n", b);
        } else {
            printf("%d is the largest\n", c);
        }
    }

    return 0;
}
