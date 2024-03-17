#include <stdio.h>
void null()
{
    int x = 10;

    int *j = NULL; // Null pointer
    if (j == NULL)
        //  j = 1; // J pointer ho so, we cannot assign it any values.
        // so
        j = &x; // garni bhanni chai kam chalxa !!!
}
void array()
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
void pointer(char *x)
{
    if (*x > 97 && *x <= 122)
    {
        *x = *x - 32;
    }
    else if (*x >= 65 && *x <= 90)
    {
        *x = *x + 32;
    }
    printf("Converted to %c", *x);
}
void main()
{
    // int x = 10;
    // int *i = &x;
    // int **j = &i; // double pointer
    // printf("value of x= %d \n", x);
    // printf("Address of of x= %p\n", &x);
    // printf("value of x using i= %p \n", *i);
    // printf("Address in i= %p \n", i);
    // printf("value of x using j= %d \n", **j);
    // printf("Address of i= %p \n", &i);
    // printf("Address in j= %p \n", j);
    // printf("Address of j= %p \n", &j);
    null();
    array();
    char c;
    printf("give the num");
    scanf("%c", &c);
    pointer(&c);
}
