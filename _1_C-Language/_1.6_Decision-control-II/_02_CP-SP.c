//? Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    float CP, SP;
    printf("Enter the cost price for the product: ");
    scanf("%f", &CP);
    printf("Enter the selling price for the product: ");
    scanf("%f", &SP);
    if (SP >= CP)
    {
        float profit = SP - CP;
        printf("Profit %: %.2f", (profit / CP) * 100);
    }
    else
    {
        float loss = CP - SP;
        printf("Loss %: %.2f", (loss * 100) / CP);
    }
    return 0;
}