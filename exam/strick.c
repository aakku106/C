#include <stdio.h>
void sup_design();
void main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        int m = 5 - i;
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        int m = 5 - i;
        for (int space = 0; space < i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        int m = 5 - i;
        for (int space = 0; space < m; space++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    sup_design();
}
void sup_design()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        int m = 5 - i;
        for (int space = 0; space < i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        int m = 5 - i;
        for (int space = 0; space < m; space++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        int m = 5 - i;
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}