// to print subarray bw two indexes 
   
#include <stdio.h>

int main() {
    int arr[100], n, start, end, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter starting index: ");
    scanf("%d", &start);
    printf("Enter ending index: ");
    scanf("%d", &end);

    // Check for valid indexes
    if(start < 0 || end >= n || start > end) {
        printf("Invalid indexes!\n");
        return 0;
    }

    printf("\nSubarray between indexes %d and %d:\n", start, end);
    for(i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
