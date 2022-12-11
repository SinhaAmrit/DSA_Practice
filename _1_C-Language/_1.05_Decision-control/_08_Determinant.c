//? Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
#include <stdio.h>
int checkSquare(int num);
int main()
{
    int a, b, c, D;
    printf("Enter the equation to check(a,b,c): ");
    scanf("%d,%d,%d", &a, &b, &c);
    D = b ^ 2 - (4 * a * c);
    if (D == 0)
        printf("The roots are real and equal.\n");
    else if (D < 0)
        printf("The roots are unequal and imaginary.\n");
    else if (checkSquare(D))
        printf("The roots are real unequal and rational\n");
    else
        printf("The roots are unequal and irrational.\n");
    return 0;
}

int checkSquare(int num)
{
    if (num == 1 || num == 0)
        return 1;
    for (int i = 2; i <= num / 2; i++)
        if (num == i * i)
            return 1;
    return 0;
}