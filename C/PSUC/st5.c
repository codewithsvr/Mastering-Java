// reverse a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);            // reads the full string

    strrev(str);          // reverse the string

    printf("Reversed string = %s", str);

    return 0;
}
