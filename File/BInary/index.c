#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *fp;
    char another = 'Y';
    struct employee
    {
        char name[40];
        int age;
        float salary;
    };
    struct employee emp;
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening");
    }
    while (another == 'Y')
    {
        printf("give ur name, age, salary\n");
        scanf("%s %d %f", emp.name, &emp.age, &emp.salary);
        fwrite(&emp, sizeof(emp), 1, fp);

        printf("\n Add another record (Y/N)");
        fflush(stdin);
        another = getchar();
    }
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    printf("The records in the file employee are... \n");
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        printf("\n %s %d %f", emp.name, emp.age, emp.salary);
    }
    fclose(fp);
    return 0;
}

/* Wap to create aa file name employee.dat & store records of 'n' employee in thar file.
 THese records contain identification number, office name and the name of occupation of the employee,
  also name of these employee, whose office name is Everest Bank and occupation is manager. */