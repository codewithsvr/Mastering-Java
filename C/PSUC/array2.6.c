// Find the trace and norm of a given square matrix.

#include <stdio.h>
#include <math.h>

int main()
{
    int array[10][10];
    int i, j, m, n;
    int sumTrace = 0, sumSquares = 0;
    int norm;

    printf("Enter the order of the matrix\n");
    scanf("%d %d", &m, &n);

    printf("Enter the coefficients of the matrix\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
            sumSquares += array[i][j] * array[i][j];
        }
    }

    norm = sqrt(sumSquares);

    for(i = 0; i < m; i++)
    {
        sumTrace += array[i][i];
    }

    printf("The normal of the given matrix is = %d\n", norm);
    printf("Trace of the matrix is = %d\n", sumTrace);

    return 0;
}
