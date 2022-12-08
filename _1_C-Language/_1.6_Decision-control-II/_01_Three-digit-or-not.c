//? Write a program to check whether a given number is a three digit number or not.
#include <stdio.h>
int main()
{
    int num = 352;
    if (num <= 999 && num >= 100)
        printf("%d is a three digit number\n", num);
    else
        printf("%d is not a three digit number\n", num);
    return 0;
}