// wap to create a file name employee.txt and write name id and address and salary of this file
#include <stdio.h>
void main()
{
    FILE *fp;
    char name[20];
    int id;
    char address[20];
    int age;
    float salary;
    fp = fopen("employee.txt", "w");
    if (fp == NULL)
    {
        printf("error");
        return;
    }
    printf("enter name of employee: \t");
    gets(name);
    printf("enter id of %s: \t", name);
    scanf("%d", &id);
    fflush(stdin);
    printf("\n enter address of %s: \t", name);
    gets(address);
    printf("\n enter salary: \t");
    scanf("%d", &salary);
    printf(fp, "name=%s\n id=%d \n address=%s \n salary=%.2f\n", name, id, address, salary);
    printf("completed");
    fclose(fp);
}
