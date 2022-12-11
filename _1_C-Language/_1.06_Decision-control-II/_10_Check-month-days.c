//? Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number (1 to 12): ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("31 days in the month.\n");
    else if (month == 2)
        printf("28/29 days.\n");
    else
        printf("30 days.\n");
    return 0;
}