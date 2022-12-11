//? Write a program to print the first N odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 20, count = 0, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (count < N)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            count++;
        }
        i--;
    }
    return 0;
}