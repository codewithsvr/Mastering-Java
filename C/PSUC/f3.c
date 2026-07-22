// Check whether the given number is prime or not. 

#include <stdio.h>

int prime(int n);   // Function prototype

int main()
{
    int num, res;
    printf("\nENTER A NUMBER: ");
    scanf("%d", &num);

    res = prime(num);

    if(res == 0)
        printf("\n%d IS A PRIME NUMBER\n", num);
    else
        printf("\n%d IS NOT A PRIME NUMBER\n", num);

    return 0;
}

int prime(int n)
{
    int i;

    if(n <= 1)
        return 1;   // 0 and 1 are not prime

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 1;   // Not prime
    }

    return 0;   // Prime
}
