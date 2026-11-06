#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int c[2][2];
    int i,j;

    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("Resultant matrix after subtraction:\n");

    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}