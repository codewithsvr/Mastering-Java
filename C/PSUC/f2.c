//Find the maximum of a given set of numbers using functions.

#include <stdio.h>

int max(int x[], int k);     // Function prototype

int main()
{
    int a[] = {10, 5, 45, 12, 19};
    int n = 5;
    int m;

    m = max(a, n);

    printf("\nMAXIMUM NUMBER IS %d\n", m);

    return 0;
}

int max(int x[], int k)
{
    int t = x[0];
    int i;

    for(i = 1; i < k; i++)
    {
        if(x[i] > t)
            t = x[i];
    }

    return t;
}
