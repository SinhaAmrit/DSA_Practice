//? Write a program to calculate LCM of two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, flag = 0, res = 1, i = 2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("LCM of %d and %d is ", num1, num2);
    for (res = num1 > num2 ? num1 : num2; res <= num1 * num2; res++)
        if (res % num1 == 0 && res % num2 == 0)
        {
            printf("%d.", res);
            break;
        }
    return 0;
}