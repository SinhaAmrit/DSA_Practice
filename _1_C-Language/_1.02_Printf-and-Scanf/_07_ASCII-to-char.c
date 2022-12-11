//? 07. Write a program to input ASCII code from the user and print its corresponding value.
#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("Equivalent ASCII character is: %c\n", i);
    return 0;
}