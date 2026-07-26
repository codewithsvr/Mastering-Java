//Find whether a given matrix is symmetric or not. Hint: A = AT

#include <stdio.h>
#define SIZE 3

int main()
{
    int A[SIZE][SIZE];  // Original matrix
    int B[SIZE][SIZE];  // Transpose matrix
    int row, col;
    int isSymmetric = 1;

    printf("Enter elements in matrix of size 3x3:\n");
    for(row = 0; row < SIZE; row++)
    {
        for(col = 0; col < SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    
    // Find transpose of matrix A
    for(row = 0; row < SIZE; row++)
    {
        for(col = 0; col < SIZE; col++)
        {
            B[row][col] = A[col][row];
        }
    }

    // Check if A == Transpose(A)
    for(row = 0; row < SIZE; row++)
    {
        for(col = 0; col < SIZE; col++)
        {
            if(A[row][col] != B[row][col])
            {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
    {
        printf("\nThe given matrix is Symmetric matrix:\n");
        for(row = 0; row < SIZE; row++)
        {
            for(col = 0; col < SIZE; col++)
            {
                printf("%d ", A[row][col]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is NOT a Symmetric matrix.\n");
    }

    return 0;
}
