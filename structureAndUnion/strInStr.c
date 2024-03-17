#include <stdio.h>
struct person
{
    char name[20];

        int age;
};
struct std
{
    struct person p;
    int rollno;
    float marks;
};
struct techer
{
    struct person p;
    int tid;
    float salary;
    char address[20];
};
void main()
{
    struct std s;
    printf("Enter name of 1st std : \n");
    gets(s.p.name);
    printf("Enter age of 1st std : \n");
    // scanf("%d", &s.p.age);
    // s.p.age = 25;
    // s.p.name = "Rahul";
    // s.rollno = 123456789;
    // s.marks = 90.0;
    // printf("%d\n",s.p.age);
    // printf("%s\n",s.p.name);
    // printf("%d\n",s.rollno);
    // printf("%f\n",s.marks);
}
