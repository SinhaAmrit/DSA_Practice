//? Write a program to check whether a given number is an even number or an odd number.
#include <stdio.h>
int main()
{
    int num = 232;
    if (num % 2 == 0)
        printf("Number %d is an even number", num);
    else
        printf("Number %d is an odd number", num);
    return 0;
}