#include <stdio.h>
// void another(int, char, char);
void another(int age, char name[20], char gender[10])
{
}
struct data
{
    int age;
    char name[20];
    char gender[10];
};

void main()
{
    struct data d;
    printf("give the name, age and gender");
    scanf("%d%s%s", &d.age, d.name, d.gender);
    another(d.age, d.name, d.gender);
}
