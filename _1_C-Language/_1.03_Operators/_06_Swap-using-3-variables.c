//? 06. Write a program to swap values of two int variables.
#include <stdio.h>
int main()
{
    int num1 = 56, num2 = 87, temp;
    printf("Num1: %d, Num2: %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Num1: %d, Num2: %d\n", num1, num2);
    return 0;
}