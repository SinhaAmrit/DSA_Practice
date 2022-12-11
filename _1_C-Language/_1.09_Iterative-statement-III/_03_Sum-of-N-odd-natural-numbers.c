//? Write a program to calculate sum of first N odd natural numbers.
#include <stdio.h>
int main()
{
    int N, sum;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int count = 0, i = 1; count <= N; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            count++;
        }
    }
    printf("Sum of first %d odd natural numbers is %d\n", N, sum);
    return 0;
}