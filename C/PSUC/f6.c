// Print first N Fibonacci terms using this function.

#include <stdio.h>

void fibo(int n);   // function prototype

int main() 
{
    int n;
    printf("Enter a number to generate Fibonacci series for first n terms: ");
    scanf("%d", &n);

    fibo(n);

    return 0;
}

void fibo(int n)
{
    int i;
    int a = 0;
    int b = 1;
    int c = 0;

    printf("Fibonacci series for %d terms:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
}
