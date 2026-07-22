// uses a pointer to move through the array
// → and keeps adding values to make the sum

#include <stdio.h>

int main()
{
    int array[5];
    int i, sum = 0;
    int *ptr;

    printf("Enter array elements (5 integer values): ");
    for (i = 0; i < 5; i++)
        scanf("%d", &array[i]);

    ptr = array;   // ptr now points to array[0]

    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;   // add the value pointer is pointing to
        ptr++;              // move pointer to next element
    }

    printf("\nThe sum is: %d", sum);

    return 0;
}
