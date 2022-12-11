//? 08. Write a program to input three characters from the user and display characters with their corresponding ASCII code.
#include <stdio.h>
int main()
{
    char ch1, ch2, ch3;
    printf("Enter 3 characters: ");
    scanf("%c%c%c", &ch1, &ch2, &ch3);
    printf("Characters with their corresponding ASCII code: \n");
    printf("%c = %d\n%c = %d\n%c = %d\n", ch1, ch1, ch2, ch2, ch3, ch3);
    return 0;
}