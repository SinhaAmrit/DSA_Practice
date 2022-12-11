//? Write a program to take marks of 5 subjects from the user Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include <stdio.h>
#define FULL_MARKS 100
#define PASS_MARKS 33
int main()
{
    int marks[5], totalMarks = 0;
    printf("Enter the marks of all 5 subjects (out of %d): \n", FULL_MARKS);
    for (int i = 0; i < 5; i++)
    {
        printf("Subject_%d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }
    printf("Result of the examination is ");
    if ((totalMarks / 5) >= PASS_MARKS)
        printf("PASS\n");
    else
        printf("FAIL\n");
    return 0;
}