/* Determine whether a substring (string 1) is in the main sting or not. If present, return the pointer of the first occurrence.*/

#include <stdio.h>

char* findSubstring(char *str, char *sub)
{
    int i, j, flag;

    for (i = 0; str[i] != '\0'; i++)
    {
        flag = 1;

        for (j = 0; sub[j] != '\0'; j++)
        {
            if (str[i + j] != sub[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            return &str[i];   // return pointer to first occurrence
    }

    return NULL; // not found
}

int main()
{
    char str[100], sub[50];
    char *ptr;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    ptr = findSubstring(str, sub);

    if (ptr != NULL)
        printf("Substring found at: %s", ptr);
    else
        printf("Substring NOT found");

    return 0;
}