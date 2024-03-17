#include <stdio.h>
void main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf(" enter the element of%d\n",i);
        scanf("%d",a+i);
    }
    printf("array elements are : \t");
    for (int i = 0; i < 5; i++)
    {
printf("%d\t",*(a+i));
    }
    
    
}