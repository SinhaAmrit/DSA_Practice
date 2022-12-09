//? Write a program to print a table of 5.
#include <stdio.h>
int main()
{
    int table = 5, times = 10;
    for (int i = 1; i <= times; i++)
        printf("%d x %d = %d\n", table, i, table * i);
    return 0;
}