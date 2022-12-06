//? Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int num1 = 302, num2 = 231, num3 = 302;
    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d is the largest number.", num1);
        return 0;
    }
    if (num2 >= num1 && num2 >= num3)
    {
        printf("%d is the largest number.", num2);
        return 0;
    }
    if (num3 >= num1 && num3 >= num2)
    {
        printf("%.2f is the largest number.", num3);
        return 0;
    }
}