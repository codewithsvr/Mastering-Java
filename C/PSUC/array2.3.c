//Multiplication of two matrices.

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mul[10][10];
    int r, c, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Input first matrix
    printf("Enter first matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter second matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("Multiplication of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/* Write a C program to multiply two matrices entered by the user.
First input the order (rows and columns) of the first matrix and then enter its elements.
Then input the order of the second matrix and enter its elements.
Before multiplication, check whether the two matrices can be multiplied or not.
If the number of columns of the first matrix is not equal to the number of rows of the second matrix, display an error message.
Otherwise, perform matrix multiplication and display the resulting matrix.*/ 


#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];
    int i, j, k;

    // Read order of Matrix A
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Read order of Matrix B
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Error: Matrices cannot be multiplied!\n");
        printf("Columns of A (%d) != Rows of B (%d)\n", c1, r2);
        return 0;
    }

    // Read Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Result
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
