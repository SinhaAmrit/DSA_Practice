//? Write a program to make the last digit of a number stored in a variable as zero.
//? (Example - if x = 2345 then make it x = 2340)
#include <stdio.h>
int main()
{
    int num = 12345;
    printf("Initially num is: %d\n", num);
    num = (num / 10) * 10;
    printf("Now the num is: %d\n", num);
    return 0;
}