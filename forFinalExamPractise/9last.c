// create a struct STUDENT with data SID,Name,Address,CGPA. Write a program to initialize thr value of 100 students and display the info having address KTM and CPPA between 3.5 to 4.
#include <stdio.h>
#include <string.h>
struct STUDENT
{
    int SID;
    char Name[100];
    char Address[100];
    float CGPA;
};
int main()
{
    struct STUDENT s[100];
    for (int i = 0; i < 100; i++)
    {
        s[i].SID = i + 1;
        strcpy(s[i].Name, "Name");
        strcpy(s[i].Address, "KTM");
        s[i].CGPA = 3.5 + i * 0.01;
    }
    for (int i = 0; i < 100; i++)
    {
        if (strcmp(s[i].Address, "KTM") == 0 && s[i].CGPA >= 3.5 && s[i].CGPA <= 4)
        {
            printf("SID: %d\n", s[i].SID);
            printf("Name: %s\n", s[i].Name);
            printf("Address: %s\n", s[i].Address);
            printf("CGPA: %.2f\n", s[i].CGPA);
        }
    }
    return 0;
}