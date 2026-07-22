//Find Smallest Number Using Pointer

#include <stdio.h>

int main()
{
    int a[20], n, i, sml;
    int *ptr;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    printf("\nEnter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    ptr = a;   // or &a[0]

    printf("\nNumbers you entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    ptr = a;   // Reset pointer
    sml = *ptr;

    for (i = 0; i < n; i++)
    {
        if (*(ptr + i) < sml)
            sml = *(ptr + i);
    }

    printf("\nSmallest element is: %d\n", sml);

    return 0;
}
