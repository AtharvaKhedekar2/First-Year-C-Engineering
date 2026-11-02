/*
 * Experiment No. 08
 * Aim: Write a C program to implement all string operations:
 *      length, copy, concatenation, comparison and reverse.
 */

#include <stdio.h>
#include <string.h>

int main() {
    /* str3 is large enough to hold both strings after concatenation */
    char str1[100], str2[100], str3[200];
    int i;

    /* %99s reads one word and leaves space for the '\0' character */
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);

    /* String length */
    printf("\nLength of first string = %d\n", (int) strlen(str1));

    /* String copy */
    strcpy(str3, str1);
    printf("Copy = %s\n", str3);

    /* String concatenation */
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("Concatenation = %s\n", str3);

    /* String comparison */
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    /* String reverse: print the characters from last to first */
    printf("Reverse of first string = ");
    for (i = (int) strlen(str1) - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}
