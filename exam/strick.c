#include <stdio.h>
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
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}