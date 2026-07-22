// Find the factorial of a number using a function

#include <stdio.h>

int fact(int n);   // Function prototype

int main()
{
    int no, factorial;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &no);

    factorial = fact(no); // fn calling 

    printf("Factorial of %d = %d\n", no, factorial);

    return 0;
}

int fact(int n) // fn defination 
{
    int i, f = 1;

    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}