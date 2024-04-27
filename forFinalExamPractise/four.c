// y= 2x^3 + 3x^2 - 5x + 4. find the value of y taking value of x from user.
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    y = 2 * x * x * x + 3 * x * x - 5 * x + 4;
    printf("The value of y is: %d", y);
    return 0;
}
