//? 02. Write a program to calculate size of a real constant.
#include <stdio.h>
int main()
{
    int size;
    size = sizeof(1.5);
    printf("Size of a real constant is %d\n", size);
    return 0;
}