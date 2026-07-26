// Find the string is a palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';

    strcpy(rev, str);   // copy original string
    strrev(rev);        // reverse the copied string

    if(strcmp(str, rev) == 0)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

    return 0;
} 
