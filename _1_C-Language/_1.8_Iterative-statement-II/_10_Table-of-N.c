//? Write a program to print a table of N.
#include <stdio.h>
int main()
{
    int N, times = 10;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= times; i++)
        printf("%d x %d = %d\n", N, i, N * i);
    return 0;
}