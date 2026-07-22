// Program to Split an Array Into Two Arrays..  
#include <stdio.h>

int main() {
    int arr[10], firstHalf[5], secondHalf[5];
    int i;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Copy first half
    for (i = 0; i < 5; i++) {
        firstHalf[i] = arr[i];
    }

    // Copy second half
    for (i = 0; i < 5; i++) {
        secondHalf[i] = arr[i + 5];
    }

    // Print first half
    printf("\nFirst half:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", firstHalf[i]);
    }

    // Print second half
    printf("\n\nSecond half:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", secondHalf[i]);
    }

    return 0;
}
