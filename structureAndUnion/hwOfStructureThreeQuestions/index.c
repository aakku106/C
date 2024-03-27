// structure std having rollno name marks remarks as members. Assume appropiate type and size of menber.
//     "     to readd and display the data given by user.
// use 1 to read and display red of 10 students.
// In a bank THERE ARE n customers with attributes name, account number,balance. Wap to find out who has the highest balance in bank

#include <stdio.h>
void bank();
struct student
{
    int roll_number;
    char name[20];
    float marks;
    char remarks[20];
};
void std()
{
    struct student ccn;
    printf("give the name,roll_number,\tmarks &\tremarks of students\n");
    scanf("%s%d%f%s", ccn.name, &ccn.roll_number, &ccn.marks, ccn.remarks);
    printf("name: %s,\nroll_number: %d,\nMarks: %.2f,\nremarks:%s\n", ccn.name, ccn.roll_number, ccn.marks, ccn.remarks);
}
void tenStd()
{
    struct student ccn_s[10];
    for (int i = 0; i < 10; i++)
    {
        printf("give the name,roll_number,\tmarks &\tremarks of student %d \n", i);
        scanf("%s%d%f%s", ccn_s[i].name, &ccn_s[i].roll_number, &ccn_s[i].marks, ccn_s[i].remarks);
    }
    printf("\n name \t Roll-num \t Marks \t Remarks");
    for (int i = 0; i < 10; i++)
    {
        printf("\n %s \t %d \t %.2f \t %s", ccn_s[i].name, ccn_s[i].roll_number, ccn_s[i].marks, ccn_s[i].remarks);
    }
}
void main()
{
    std();
    printf("\n\n");
    tenStd();
    printf("\n\n");
    bank();
}

struct bank
{
    char name[10];
    int account_number;
    float balance;
};

void bank()
{
    int n;
    printf("how many costumers we have ?");
    scanf("%d", &n);
    struct bank m[n];
    for (int i = 1; i <= n; i++)
    {

        printf("Give the name of Costumer %d: \t", i);
        scanf("%s", m[i].name);
        printf("\nGive the account number of Costumer %d: \t", i);
        scanf("%d", &m[i].account_number);
        printf("\nGive the balance of Costumer %d: \t", i);
        scanf("%f", &m[i].balance);
        printf("\n\n");
    }
    printf("\t |Name of costumer| \t |Account_number| \t |Balance|\n");

    for (int i = 1; i <= n; i++)
    {
        printf("\t %s \t\t\t %d \t\t\t %.3f\n \n\n", m[i].name, m[i].account_number, m[i].balance);
    }

    if (n > 1)
    {
        for (int i = 0; i <= n; i++)
        {
            int check = 0;
            if (m[i].balance > m[check].balance)
            {
                /* code */
            }
                }
    }
}