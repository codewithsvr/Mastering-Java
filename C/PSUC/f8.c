// 	Check if the given string is a palindrome or not, using string handling function

#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (l < h)
    {
        if (str[l] != str[h])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
        l++;
        h--;
    }
    printf("%s is a palindrome\n", str);
}

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);   // Read the string from user

    isPalindrome(s);

    return 0;
}
