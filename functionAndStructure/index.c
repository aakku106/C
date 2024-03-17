#include <stdio.h>
void display();
    struct employee
    {
        char name[30];
        int e_id;
        float salary;
    };
void main()
{
    struct employee emp;
    printf("Enter the name of the employee\n");
    scanf("%s", emp.name);
    printf("\n enter id");
    scanf("%d", &emp.e_id);
    printf("\n enter salary");
    scanf("%f", &emp.salary);
    display(emp.name, emp.e_id, emp.salary);
}
void display(struct employee *e)
{
    printf("\n name: %s\n e_id: %d\n salary: %f \n", e->name, e->e_id, e->salary);
}