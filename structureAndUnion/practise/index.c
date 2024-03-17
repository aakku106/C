#include <stdio.h>
struct person
{
    int age;
    char name[20];
    char gender[10];
};
struct person p={16,"Ccn","Orichimaru"};
void main()
{
printf("%d,%s,%s \n",p.age,p.name,p.gender);    
struct person p1={18,"Aakku","M"};
printf("\t%d,%s,%s\n",p1.age,p1.name,p1.gender);
}
