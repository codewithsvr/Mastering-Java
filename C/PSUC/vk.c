#include <stdio.h>
int main() {
    int n = 18; // height of the pattern

    for (int i = 0; i < n; i++) {
        // Print "1"
        for (int j = 0; j < n; j++) {
            if (j == n/2) {   // vertical line in the middle
                printf("18 ");
            } else {
                printf("   ");
            }
        }

        printf("      "); // space between 1 and 8

        // Print "8"
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n/2 || i == n-1 || j == 0 || j == n-1) {
                printf("18 ");
            } else {
                printf("   ");
            }
        }

        printf("\n");
    }

    return 0;
}