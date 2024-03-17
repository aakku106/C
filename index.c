#include <stdio.h>
int snap(int *, int *);
void main()
{
    int a = 5, b = 6;
    printf("a=%d,b=%d\n", a, b);
    snap(&a, &b);
}
int snap(int *a, int *b)
{
    int rept;
    rept = *a;
    *a = *b;
    *b = rept;
    printf(" snap \n a=%d,b= %d\n", *a, *b);
    return 0;
}
