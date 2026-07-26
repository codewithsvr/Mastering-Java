// Program to find last occurrence of a character in a String 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, index = -1;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter the character you want to search for: ");
    scanf("%c", &ch);

    int length = strlen(str);  // store length only once

    for(i = 0; i < length; i++)
    {
        if(str[i] == ch)
        {
            index = i;   // keep updating → last occurrence will remain
        }
    }

    if(index == -1)
        printf("Not found!");
    else
        printf("The last occurrence is at position %d", index + 1);

    return 0;
}
