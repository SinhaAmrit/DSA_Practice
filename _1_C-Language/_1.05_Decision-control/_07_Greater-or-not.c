//? Write a program to print greater two numbers. Print one number if both are the same.
#include <stdio.h>
int main()
{
    int num1 = 564, num2 = 55;
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    else if (num1 == num2)
        printf("%d is equal to %d\n", num1, num2);
    else
        printf("%d is greater than %d\n", num2, num1);
    return 0;
}