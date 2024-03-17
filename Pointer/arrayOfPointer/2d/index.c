#include <stdio.h>
void pointer();
void main()
{
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" giv the element of %d\t", i);
            scanf("%d", &a[i][j]);
        }
    }
    printf("array elements are : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d\t", a[i][j]);
        }
        printf("\n");
    }
    pointer();
}
void pointer()
{
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" giv the element of %d\t", i);
            scanf("%d", &a[i][j]);
        }
    }
    printf("array elements are : \n\t");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d\t", a[i][j]);
        }
        printf("\n");
    }
}