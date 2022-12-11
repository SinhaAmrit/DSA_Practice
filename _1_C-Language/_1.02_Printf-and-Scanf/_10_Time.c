//? 10. Write a program to take time as an inout in below given format and convert the time format and display the result as given below.
// User Input time format - "HH:MM"
// Output format - "HH hour and MM Minute"

#include <stdio.h>
int main()
{
    int hour, minute;
    printf("Enter hour and minute (HH:MM): ");
    scanf("%d:%d", &hour, &minute);
    printf("%d Hour and %d Minute\n", hour, minute);
    return 0;
}