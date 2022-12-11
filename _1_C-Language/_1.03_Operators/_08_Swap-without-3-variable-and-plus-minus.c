//? 08. Write a program to swap values of two int variables without using third variable and without using +, -operators.
#include <stdio.h>
int main()
{
    int num1 = 654, num2 = 546;
    printf("Num1: %d, Num2: %d\n", num1, num2);
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    printf("Num1: %d, Num2: %d\n", num1, num2);
    return 0;
}