#include <stdio.h>
struct std
{
    char name[50];
    int rollno;
    float marks;
};

void main()
{
    struct std s1, s2, s3;
    printf("\nGiv ur nam");
    gets(s1.name);
    printf("\nGiv ur rollno");
    scanf("%d", &s1.rollno);
    printf("\nGiv ur marks");
    scanf("%f", &s1.marks);
    printf("\n Info of 1st std");
    printf("name = %s, rollno = %f, marks = %f\n", s1.name, s1.rollno, s1.marks);
}
// structure std having rollno name marks remarks as members. Assume appropiate type and size of menber.
//     "     to readd and display the data given by user.
// use 21 to read and display red of 10 students.
// In a bank THERE ARE n customers with attributes name, account number,balance. Wap to find out who has the highest balance in bank
