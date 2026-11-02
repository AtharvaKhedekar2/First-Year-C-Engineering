/*
 * Experiment No. 04
 * Aim: Given a year, determine whether it is a leap year or not.
 */

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    /* First check that the year is valid */
    if (year > 0 && year <= 9999) {
        /* Leap year: divisible by 4, and century years must be divisible by 400 */
        if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
            printf("%d is a leap year\n", year);
        } else {
            printf("%d is not a leap year\n", year);
        }
    } else {
        printf("Not a valid year\n");
    }

    return 0;
}
