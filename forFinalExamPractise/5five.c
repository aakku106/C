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
    printf("\n | Name\t |Age\t |Address\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" | %s \t | %d \t | %s\n", emp[i].name, emp[i].age, emp[i].address);
    }
    return 0;
}
/* OUTPUT:
Enter name, age and address of employee 1: ccn 20 sdhshs
Enter name, age and address of employee 2: ccn 20 sdhshs
Enter name, age and address of employee 3: ccn 20 sdhshs
Enter name, age and address of employee 4: ccn 20 sdhshs
Enter name, age and address of employee 5: ccn 20 sdhshs

 | Name  |Age    |Address
 | ccn   | 20    | sdhshs
 | ccn   | 20    | sdhshs
 | ccn   | 20    | sdhshs
 | ccn   | 20    | sdhshs
 | ccn   | 20    | sdhshs
*/