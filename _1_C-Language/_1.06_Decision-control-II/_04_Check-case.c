//? Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter an alphabetic letter: ");
    alpha = getchar();
    if (alpha >= 'A' && alpha <= 'Z')
        printf("An uppercase alphabet");
    else if (alpha >= 'a' && alpha <= 'z')
        printf("A lowercase alphabet");   
    return 0;
}