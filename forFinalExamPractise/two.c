// program to skip over first three integers of input string using * modifier in formated input function
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter  numbers:\t ");
    scanf("%*d %*d %*d %d %d %d %d", &a, &b, &c, &d);
    printf("a = %d, b = %d, c = %d %d", a, b, c, d);
    return 0;
}