//? 03. Write a program to calculate Simple Interest.
#include <stdio.h>
int main()
{
    float principal = 5545.4554, rate = 12.5, time = 24;
    printf("Principal: %.2f rupees\nRate: %.2f\nTime: %.2f Months\n", principal, rate, time);
    printf("Final Amount: %.2f\n", (principal * rate * time) / 100);
    return 0;
}