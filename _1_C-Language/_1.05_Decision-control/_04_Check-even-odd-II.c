//? Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    int num = 50;
    if ((num / 2) * 2 == num)
        printf("Number %d is Even\n", num);
    else
        printf("Number %d is Odd\n", num);
        return 0;
}