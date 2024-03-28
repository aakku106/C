#include <stdio.h>
void main()
{
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("array element are: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)

            printf("%d\t", a[i][j]);
        printf("\n");
    }
}