/*
 * Experiment No. 01
 * Aim: Introduction to C programming environment.
 *
 * This program shows the basic structure of a C program:
 * header file, main() function, variable declaration, body and return statement.
 */

/* Header file: stdio.h gives us printf() */
#include <stdio.h>

/* Main function: execution of every C program starts here */
int main() {
    /* Variable declaration */
    int a = 10;

    /* Body of the program */
    printf("Hello, World!\n");
    printf("Value of a = %d\n", a);

    /* Return statement: 0 tells the system the program ended normally */
    return 0;
}
