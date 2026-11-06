#include<stdio.h>

int main() {
    int marks[5];
    int i;

    printf("Enter the marks of 5 subjects:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("The marks entered are:\n");

    for (i=0;i<5;i++)
    {
        printf("%d", marks[i]);
    }

    return 0;
}