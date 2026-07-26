//  Determine the length of a character string using a pointer.

#include <stdio.h>

int string_ln(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}

int main()
{
    char str[100];
    int length;

    printf("Enter any string: ");
    scanf("%s", str);   // or use fgets()

    length = string_ln(str);

    printf("The length of the given string \"%s\" is: %d\n", str, length);

    return 0;
}
