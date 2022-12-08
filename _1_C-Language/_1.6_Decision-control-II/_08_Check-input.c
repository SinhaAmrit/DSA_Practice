//? Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z')
        printf("%c is a lowercase character", character);
    else if (character >= 'A' && character <= 'Z')
        printf("%c is an uppercase character", character);
    else if (character >= '0' && character <= '9')
        printf("%c is a digit", character);
    else
        printf("%c is a special character", character);
    return 0;
}