//? 01. Write a program to calculate size of a character constant.
#include <stdio.h>
int main()
{
    int size;
    size = sizeof('A');
    printf("Size of a character constant: %d\n", size);
    return 0;
}