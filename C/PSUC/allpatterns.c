#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // 1. Square Pattern
    printf("\nSquare Pattern:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 2. Right Triangle
    printf("\nRight Triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 3. Inverted Right Triangle
    printf("\nInverted Right Triangle:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 4. Pyramid Pattern
    printf("\nPyramid:\n");
    int m=1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 5. Number Triangle
    printf("\nNumber Triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 6. Inverted Number Triangle
    printf("\nInverted Number Triangle:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 7. Floyd's Triangle
    printf("\nFloyd's Triangle:\n");
    int num = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
