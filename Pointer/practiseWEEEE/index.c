#include <stdio.h>
void add()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int *p = &a, *q = &b;
    // *p=&a, *q=&b; garnu ra p = &a; q = &b; garnu same ho, but *p=&a ani *q=&b; garnu chai invalid hunxa

    printf("%d\n", a + b);   // simple
    printf("%d\n", *p + *q); // pointer walla
    // p ma bhako vallu ra q ma bhako vallu ko sum bhako hunxa mathillo line ma ...
    // printf("%d\n", p + q); // yo chai mildhaina not possible
    // int sum = p + q; // same as before, not possible
}
void main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d a \n", a);
    printf("%d *p \n", *p);
    printf("%p &a \n", &a);
    printf("%p p \n", p);
    printf("%p &p \n", &p);
    printf("%p &*p \n", &*p);
    add();
}
