//? Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int num, reverse;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d ", num);
    while (num)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    printf("is %d\n", reverse);
    return 0;
}