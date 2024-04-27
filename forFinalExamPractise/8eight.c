#include <stdio.h>
void main()
{
    int a[100], n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("start giving elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d ", a[n - 3]);
    printf("%d \n", a[0]);
    printf("%d ", a[n - 1]);
}