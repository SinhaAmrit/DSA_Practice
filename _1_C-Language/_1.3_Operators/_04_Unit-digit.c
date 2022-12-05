//? 04. Write a program to print unit digit of a given number.
#include <stdio.h>
int main()
{
    int num = 512;
    printf("%d is at the unit place of %d\n", (num % 10), num);
    return 0;
}