// Find GCD of two numbers recursively.

#include <stdio.h>

int hcf(int n1, int n2);   // function prototype

int main() {
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    printf("G.C.D of %d and %d is %d.\n", n1, n2, hcf(n1, n2));

    return 0;
}

int hcf(int n1, int n2) 
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);   // recursive call
    else
        return n1;                 // base case
}
