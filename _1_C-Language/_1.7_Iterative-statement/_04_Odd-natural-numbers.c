//? Write a program to print the first 10 odd natural numbers.
#include <stdio.h>
int main()
{
    for (int count = 0, i = 1; i; i++)
    {
        if (count == 10)
            break;
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}