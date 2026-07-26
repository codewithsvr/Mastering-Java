#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 1: Check if triangle is possible
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("This Triangle is NOT possible.\n");
    } else {
        // Step 2: Check type of triangle
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if ((a * a + b * b == c * c) ||
                 (a * a + c * c == b * b) ||
                 (b * b + c * c == a * a)) {
            printf("Right-angle Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    }

    return 0;
}
