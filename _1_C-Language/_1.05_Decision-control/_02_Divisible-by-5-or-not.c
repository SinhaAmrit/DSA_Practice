//? Write a program to check whether a given number is divisible by 5 or not.
#include <stdio.h>
int main()
{
    int num = 37;
    if (num % 10 == 0 || num % 10 == 5)
        printf("Number %d is divisible by 5", num);
    else
        printf("Number %d is not divisible by 5", num);
    return 0;
}