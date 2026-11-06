#include <stdio.h>

int main() {
    int A[2] [3];
    int i, j;

printf("Enter the elements of the matrix: \n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++)
    {
        scanf("%d ", &A[i][j]);
    }
}

printf("Original matrix A is:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}

printf("Transpose of matrix A is:\n");
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d ", A[j][i]);
    }
    printf("\n");
} 
return 0;
}
