//? Write a program to print the first N even natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int N, i = 20, count = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (count < N)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            count++;
        }
        i--;
    }
    return 0;
}