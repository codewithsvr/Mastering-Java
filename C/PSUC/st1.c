//  Write a program to change all lower case letters into an upper case in a sentence.

#include <stdio.h>

int main() 
{
    char s[100];
    int i;

    printf("Enter a string: ");
    fgets(s, 100, stdin);   // read full line including spaces

    for (i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z')   // check if lowercase
        {
            s[i] = s[i] - 32;             // convert to uppercase
        }
    }

    printf("String in upper case = %s", s);

    return 0;
}
