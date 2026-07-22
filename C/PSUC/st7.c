// Find the sub-string of a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[50];
    int i, j, k, flag = 0;

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the substring: ");
    gets(substr);

    for(i = 0; i <= strlen(str) - strlen(substr); i++)
    {
        k = 0;

        for(j = i; j < i + strlen(substr); j++)
        {
            if(str[j] == substr[k])
                k++;
            else
                break;
        }

        if(k == strlen(substr))
        {
            printf("Substring found!");
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Substring not found!");

    return 0;
}
