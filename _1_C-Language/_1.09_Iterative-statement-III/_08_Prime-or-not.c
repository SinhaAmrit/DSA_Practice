//? Write a program to check whether a given number is a Prime number or not .
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check whether its prime or not: ");
    scanf("%d", &num);
    for (int i = 2; i < num / 2; i++)
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            return 0;
        }
    printf("%d is a prime number", num);
    return 0;
}