#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    int digits[10];  // to store individual digits
    int count= 0;   // number of digits

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Extract digits and store in array (in reverse order)
    while (temp > 0) {
        digits[count] = temp % 10;
        temp /= 10;
        count++;
    }

    // Print digits in correct order and calculate sum
    printf("Sum of digits: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", digits[i]);
        sum += digits[i];
        if (i != 0) {
            printf("+");
        }
    }

    printf("=%d\n", sum);

    return 0;




    int num, add = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

start:
    if (num != 0) {
        add+= num % 10;   // add last digit
        num = num / 10;    // remove last digit
        goto start;        // jump back (acts like recursion)
    }

    printf("Sum of digits = %d\n", add);
    return 0;
}

