//? Write a program to print cubes of the first 10 natural numbers.
#include <stdio.h>
int main()
{
    for (int count = 10, i = 1; i <= count; i++)
        printf("%d ", i * i * i);
    return 0;
}