//? Write a program to calculate sum of square of first N natural numbers.
#include <stdio.h>
int main()
{
    int N, sum;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        sum += i*i;
    printf("Sum of square of first %d natural numbers is %d\n", N, sum);
    return 0;
}