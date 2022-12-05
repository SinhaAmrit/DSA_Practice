//? Write a program to input a three digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of the digits: %d", sum);
    return 0;
}