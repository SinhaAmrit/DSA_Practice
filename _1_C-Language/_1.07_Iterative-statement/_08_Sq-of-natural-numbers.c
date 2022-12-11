//? Write a program to print squares of the first 10 natural numbers.
#include <stdio.h>
int main()
{
    for (int count = 10, i = 1; i <= count; i++)
        printf("%d ", i*i);
    return 0;
}