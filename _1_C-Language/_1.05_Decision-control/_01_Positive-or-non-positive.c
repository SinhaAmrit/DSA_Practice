//? Write a program to check whether a given number is positive or non positive.
#include <stdio.h>
int main()
{
    int num = 7;
    if (num < 0)
        printf("%d is not positive", num);
    else
        printf("%d is positive", num);
    return 0;
}