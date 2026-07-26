//Searching for an element in the matrix and counting the number of occurrences
#include <stdio.h>

int main() {
    int a[10][10], row, col, i, j, num, count = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    // reading matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // number to search
    printf("Enter number to find: ");
    scanf("%d", &num);

    // counting occurrences
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (a[i][j] == num)
                count++;
        }
    }

    printf("Occurrence of %d = %d\n", num, count);

    return 0;
}
