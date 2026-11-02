/*
 * Experiment No. 02
 * Aim: Write a program to demonstrate all data types with:
 *      - Variable declaration
 *      - Initialization
 *      - Input/output statements
 *
 * The data types and format specifiers follow the table given in the lab manual.
 */

/* Needed only on the MinGW compiler, so that %Lf works for long double */
#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>

int main() {
    /* Variable declaration and initialization */
    signed char sc = 'A';
    unsigned char uc = 'B';
    short int si = -100;
    unsigned short int usi = 100;
    int i = -1000;
    unsigned int ui = 1000;
    long int li = -100000L;
    unsigned long int uli = 100000UL;
    float f = 5.5f;
    double d = 12.345;
    long double ld = 123.456L;
    double temp;

    /* Output of the initialized values */
    printf("----- Initialized values -----\n");
    printf("signed char        = %c\n", sc);
    printf("unsigned char      = %c\n", uc);
    printf("short int          = %hd\n", si);
    printf("unsigned short int = %hu\n", usi);
    printf("int                = %d\n", i);
    printf("unsigned int       = %u\n", ui);
    printf("long int           = %ld\n", li);
    printf("unsigned long int  = %lu\n", uli);
    printf("float              = %f\n", f);
    printf("double             = %lf\n", d);
    printf("long double        = %Lf\n", ld);

    /* Input from the user. The space before %c skips the previous Enter key */
    printf("\n----- Enter new values -----\n");
    printf("Enter a signed char: ");
    scanf(" %c", &sc);
    printf("Enter an unsigned char: ");
    scanf(" %c", &uc);
    printf("Enter a short int: ");
    scanf("%hd", &si);
    printf("Enter an unsigned short int: ");
    scanf("%hu", &usi);
    printf("Enter an int: ");
    scanf("%d", &i);
    printf("Enter an unsigned int: ");
    scanf("%u", &ui);
    printf("Enter a long int: ");
    scanf("%ld", &li);
    printf("Enter an unsigned long int: ");
    scanf("%lu", &uli);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &d);
    /* scanf("%Lf") does not work on MinGW, so read a double and then assign it */
    printf("Enter a long double: ");
    scanf("%lf", &temp);
    ld = temp;

    /* Output of the values entered by the user */
    printf("\n----- Values entered by the user -----\n");
    printf("signed char        = %c\n", sc);
    printf("unsigned char      = %c\n", uc);
    printf("short int          = %hd\n", si);
    printf("unsigned short int = %hu\n", usi);
    printf("int                = %d\n", i);
    printf("unsigned int       = %u\n", ui);
    printf("long int           = %ld\n", li);
    printf("unsigned long int  = %lu\n", uli);
    printf("float              = %f\n", f);
    printf("double             = %lf\n", d);
    printf("long double        = %Lf\n", ld);

    return 0;
}
