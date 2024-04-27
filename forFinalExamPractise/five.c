// program to accept record of 5 emploiees having name, age and address and display them.
#include <stdio.h>
int main()
{
    struct employee
    {
        char name[30];
        int age;
        char address[50];
    };
    struct employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name, age and address of employee %d: ", i + 1);
        scanf("%s %d %s", emp[i].name, &emp[i].age, emp[i].address);
    }
    printf("\nName\tAge\tAddress\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%s\n", emp[i].name, emp[i].age, emp[i].address);
    }
    return 0;
}