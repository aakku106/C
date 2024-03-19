// wap to create a file name employee.txt and write name id and address and salary of this file??
#include <stdio.h>
#include <stdlib.h>
void new();
void read();
void main()
{
    // FILE *fp;
    // char name[20];
    // int id;
    // char address[20];
    // float salary;
    // fp = fopen("employee.txt", "w");
    // if (fp == NULL)
    // {
    //     printf("error");
    //     return;
    // }
    // printf("enter name of employee: \t");
    // gets(name);
    // printf("enter id of %s: \t", name);
    // scanf("%d", &id);
    // getchar();
    // printf("\n enter address of %s: \t", name);
    // gets(address);
    // printf("\n enter salary: \t");
    // scanf("%f", &salary);
    // fprintf(fp, "name=%s\n id=%d \n address=%s \n salary=%.2f\n", name, id, address, salary);
    // printf("\ncompleted\n");
    // fclose(fp);
    // new ();
    read();
}
void new()
{
    FILE *fp;
    struct employee
    {
        char name[20];
        int id;
        char address[20];
        float salary;
    };

    fp = fopen("employee_n.txt", "w");
    if (fp == NULL)
    {
        printf("error");
        return;
    }
    struct employee e;
    printf("enter name of employee: \t");
    gets(e.name);
    printf("enter id of %s: \t", e.name);
    scanf("%d", &e.id);
    getchar();
    printf("\n enter address of %s: \t", e.name);
    gets(e.address);
    printf("\n enter salary: \t");
    scanf("%f", &e.salary);
    fprintf(fp, "%s\t%d\t%s\t%.2f\n", e.name, e.id, e.address, e.salary);
    printf("\ncompleted\n");
    fclose(fp);
}
void read()
{
    FILE *fp;
    struct employee
    {
        char name[20];
        int id;
        char address[20];
        float salary;
    };
    struct employee e;
    fp = fopen("employee_n.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        return;
    }
    fscanf(fp, "%s", &e.name);
    fscanf(fp, "%d", &e.id);
    printf("name:%s,\n id : %d\n", e.name, e.id);
    fclose(fp);
}
