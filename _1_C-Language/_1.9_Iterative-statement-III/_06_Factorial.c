//? Write a program to calculate factorial of a number.
#include <stdio.h>
int main()
{
    int num, prod;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1, prod = 1; i <= num; i++)
        prod *= i;
    printf("Factorial of %d is %d", num, prod);
    return 0;
}