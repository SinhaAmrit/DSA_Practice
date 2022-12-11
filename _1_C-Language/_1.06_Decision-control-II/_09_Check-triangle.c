//? Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the length of the sides of the triangle (separated by spaces): ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c || a + c > b || b + c > a)
        printf("Valid triangle");
    else
        printf("Invalid triangle");
    return 0;
}