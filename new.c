#include <stdio.h>
int test();
void main()
{
    test();
    test();
    test();
}
int test()
{
    static int i = 10;
    printf("%d", i);
    i++;
    return 0;
}