// check array is sorted or not 
#include <stdio.h>

int main() {
    int n, i, flag = 1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if sorted
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = 0;   // not sorted
            break;
        }
    }

    if (flag)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is NOT sorted.\n");

    return 0;
}
