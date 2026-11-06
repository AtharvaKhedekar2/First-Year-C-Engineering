#include <stdio.h>

int main() {
    int marks[2][2];
    int i,j;

    printf("Enter marks for 2 students in 2 subjects:\n");
    for(i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Marks of students:\n");
    for(i=0; i<2; i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}