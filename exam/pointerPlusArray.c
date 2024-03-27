#include <stdio.h>
void main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int *app[5];
    app[0] = &a;
    app[1] = &b;
    app[2] = &c;
    app[3] = &d;
    app[4] = &e;
    for (int i = 0; i < 5; i++)
    {
        printf("array is %d \n ", *app[i]);
    }
}