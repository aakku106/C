#include <stdio.h>
int fact(int);
void main()
{
    int n, fac;
    printf("value of n ?");
    scanf("%d", &n);
    fac = fact(n);
    printf("Factorial is %d", fac);
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}