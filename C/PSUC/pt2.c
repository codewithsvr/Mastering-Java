/*2.	Write a program to find out the greatest and the smallest among the three numbers using pointers */

#include <stdio.h>

int main()
{
    int a, b, c, *pa, *pb, *pc;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Referencing
    pa = &a;
    pb = &b;
    pc = &c;

    // Finding Largest
    if (*pa > *pb && *pa > *pc) {
        printf("Largest = %d\n", *pa);
    }
    else if (*pb > *pa && *pb > *pc) {
        printf("Largest = %d\n", *pb);
    }
    else {
        printf("Largest = %d\n", *pc);
    }

    // Finding Smallest
    if (*pa < *pb && *pa < *pc) {
        printf("Smallest = %d\n", *pa);
    }
    else if (*pb < *pa && *pb < *pc) {
        printf("Smallest = %d\n", *pb);
    }
    else {
        printf("Smallest = %d\n", *pc);
    }

    return 0;
}
