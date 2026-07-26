//  Using this function generate first n prime numbers using the above function.  

#include <stdio.h>

int prime(int n);   // user-defined function

int main()
{
    int n, count = 0, num = 2;

    printf("Enter how many prime numbers you want: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    while(count < n)
    {
        if(prime(num) == 0)   // 0 = prime
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}

// user-defined function to check prime
int prime(int n)
{
    int i;

    if(n <= 1)
        return 1; // not prime

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 1; // not prime
    }

    return 0; // prime
}
