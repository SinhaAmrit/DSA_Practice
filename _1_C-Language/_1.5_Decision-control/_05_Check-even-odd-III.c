//? Write a program to check whether the given number is even or odd using a bitwise operator.
#include <stdio.h>
int main()
{
    int num = 50;
    if (num & 1)
        printf("Number %d is odd\n", num);
    else
        printf("Number %d is even\n", num);
    return 0;
}