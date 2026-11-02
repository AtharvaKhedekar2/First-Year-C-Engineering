/*
 * Experiment No. 07
 * Aim: Write a C program to check whether a number is an Armstrong number.
 *
 * An Armstrong number equals the sum of its digits, each raised to the power
 * of the number of digits. Example: 153 = 1*1*1 + 5*5*5 + 3*3*3
 */

#include <stdio.h>

int main() {
    long num, temp, power, sum = 0;
    int remainder, digits = 0, i;

    printf("Enter the number: ");
    scanf("%ld", &num);

    /* Count the number of digits */
    temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    /* Add each digit raised to the power of the number of digits */
    temp = num;
    while (temp > 0) {
        remainder = temp % 10;

        /* A loop is used instead of pow() because pow() returns a rounded decimal value */
        power = 1;
        for (i = 1; i <= digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == num) {
        printf("%ld is an Armstrong number\n", num);
    } else {
        printf("%ld is not an Armstrong number\n", num);
    }

    return 0;
}
