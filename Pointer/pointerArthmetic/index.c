#include <stdio.h>
void compare();
void main()
{
    float a[] = {1, 2, 3, 4, 5};
    float *f1, *f2;
    f1 = a;
    f2 = a + 3;
    printf("%d\n", f2 - f1);
    printf("%d\n", f1 - f2);
    printf("%f\t%f", *f1, *f2);
    compare();
}
void compare()
{
    float a = 10.3, b = 12.3;
    float *f1, *f2;
    if (f1>f2)
    {
printf("%u is less than %u",f1,f2);
    }
    if (f1<f2)
    {
printf("");
    }
    
    
}