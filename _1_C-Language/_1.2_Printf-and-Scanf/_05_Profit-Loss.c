//? 05. Write a program to ask user about the cost price and selling price of banana per dozen.Calculate the profit or loss earned upon selling 25 bananas.
#include <stdio.h>
int main()
{
    float CP, SP, CPOfOne, SPOfOne;
    printf("Enter the price of the Banana (dozen) you purchased: ");
    scanf("%f", &CP);
    printf("Enter the price of the Banana (25) at which you sold: ");
    scanf("%f", &SP);
    CPOfOne = CP / 12;
    SPOfOne = SP / 25;
    if (CPOfOne < SPOfOne)
        printf("Congrats you have the profit of %.2f rupees.\n", (SPOfOne - CPOfOne) * 25);
    else
        printf("Oh! You have the loss of %.2f rupees.\n", (CPOfOne - SPOfOne) * 25);
    return 0;
}