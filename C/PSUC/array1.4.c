// pnoes 0's.....
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid number of elements!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {   
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;

        if(arr[i] != 0) {  // only check odd/even for non-zero numbers
            if(arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    printf("\nNumber of positive numbers: %d", pos);
    printf("\nNumber of negative numbers: %d", neg);
    printf("\nNumber of zeros: %d", zero);
    printf("\nNumber of even numbers: %d", even);
    printf("\nNumber of odd numbers: %d\n", odd);

    return 0;
}
