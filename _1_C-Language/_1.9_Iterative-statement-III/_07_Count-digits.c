//? Write a program to count digits in a given number.
#include <stdio.h>
int main()
{
    int num, digit = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d has ", num);
    while (num > 0)
    {
        num /= 10;
        digit++;
    }
    printf("%d digits.\n", digit);
    return 0;
}