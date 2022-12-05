//? Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    printf("%d is rotated to the right as %d.\n", num, ((num % 10) * 100) + num / 10);
    return 0;
}