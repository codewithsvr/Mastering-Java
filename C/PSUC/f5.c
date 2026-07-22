// write a function to generate the nth Fibonacci term using recursion

#include <stdio.h>

int fibo(int n);   // function prototype

int main()
{
    int num, result;

    printf("Enter the nth number in Fibonacci series: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = fibo(num);
        printf("The %dth Fibonacci number is %d\n", num, result);
    }

    return 0;
} 

int fibo(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
