#include <stdio.h>
int calci(int, int, int *, int *, int *, int *);
void main()
{
    int a = 5, b = 5;
    int sum, prod, div, mult;
    printf("sum=%d,\t sub=%d,\t div=%d,\tmul=%d", sum, prod, div, mult);
    calci(a, b, &sum, &prod, &div, &mult);
}
int calci(int a, int b, int *sum, int *prod, int *div, int *mult)
{
    *sum = a + b;
    *prod = a - b;
    return calci;
}