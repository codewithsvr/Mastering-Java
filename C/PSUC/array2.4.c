//MAGIC SQUARE......

#include <stdio.h>

int main() {
    int size = 3;
    int matrix[3][3];
    int row, column;
    int sumDiagonal = 0, sumRow, sumCol;
    int isMagic = 1;

    printf("Enter matrix elements:\n");
    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            scanf("%d", &matrix[row][column]);
        }
    }

    printf("\nEntered matrix:\n");
    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }

    // Main diagonal sum
    for (row = 0; row < size; row++) {
        sumDiagonal += matrix[row][row];
    }

    // Check all rows
    for (row = 0; row < size; row++) {
        sumRow = 0;
        for (column = 0; column < size; column++) {
            sumRow += matrix[row][column];
        }
        if (sumRow != sumDiagonal) {
            isMagic = 0;
            break;
        }
    }

    // Check all columns
    for (column = 0; column < size; column++) {
        sumCol = 0;
        for (row = 0; row < size; row++) {
            sumCol += matrix[row][column];
        }
        if (sumCol != sumDiagonal) {
            isMagic = 0;
            break;
        }
    }

    if (isMagic)
        printf("\nMagic square");
    else
        printf("\nNot a Magic square");

    return 0;
}
