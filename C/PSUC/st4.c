// Count the number of words in a sentence.

#include <stdio.h>

int main()
{
    char str[100];
    int i, totalwords = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Count words
    for(i = 0; str[i] != '\0'; i++)
    {
        // Check start of a word
        if( (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') &&
            (i == 0 || str[i-1] == ' ' || str[i-1] == '\n' || str[i-1] == '\t') )
        {
            totalwords++;
        }
    }

    printf("Total number of words = %d", totalwords);

    return 0;
}
