// rev an array using a auxiliary array
#include <stdio.h>

int main() {
    int arr[100], rev[100];
    int n, i, j;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse using auxiliary array
    for(i = 0, j = n - 1; i < n; i++, j--) {
        rev[i] = arr[j];
    }

    printf("\nReversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    
    return 0;
}
