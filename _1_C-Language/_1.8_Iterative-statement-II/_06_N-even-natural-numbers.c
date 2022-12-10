//? Write a program to print the first N even natural numbers.
#include <stdio.h>
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int count = 0, i = 1; i; i++)
    {
        if (count == N)
            break;
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}