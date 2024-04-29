// sum of na num given by user
#include <stdio.h>
#include <stdlib.h>
void mallocc();
void callocc();
void rellocc();
void main()
{
    mallocc();
    callocc();
    rellocc();
}

void mallocc()
{
    int n, sum = 0, *ptr;
    printf("how hany num to giv ?\t");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error memory can't be allocated.");
        exit(0);
    }
    printf("giv ur numbers :\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("sum is %d\n", sum);
    free(ptr);
}

void callocc()
{
    int n, *ptr, sum = 0;
    printf("how many num u wanna giv ?\t");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error memory can't be allocated.");
        exit(0);
    }
    printf("Give ur numbers : \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("sum is %d \n", sum);
    free(ptr);
}
void rellocc()
{
    int n1, n2, *ptr;
    printf("guv size\t");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error memory can't be allocated\n");
    }
    for (int i = 0; i < n1; ++i)
    {
        printf("%u\n", ptr + i);
    }
    printf("Enter new size: \n");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2 * sizeof(int));
    printf("adress of new allocated memory \n");
    for (int i = 0; i < n2; ++i)
    {
        /* code */
        printf("%u\n", ptr + i);
    }
    free(ptr);
}