//? Write a program to print the first 10 natural numbers in reverse order
#include <stdio.h>
int main()
{
    int count = 10;
    for (int i = count; i >= 1; i--)
        printf("%d\n", i);
    return 0;
}