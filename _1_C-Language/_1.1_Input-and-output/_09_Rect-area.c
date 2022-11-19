#include <stdio.h>
int main()
{
    int length, breath;
    printf("Enter the length and breath of the rectangle: ");
    scanf("%d%d", &length, &breath);
    printf("Area of the rectangle whose %d units and %d units is %d sq units.\n", length, breath, 2 * (length + breath));
    return 0;
}