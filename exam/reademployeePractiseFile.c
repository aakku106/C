#include <stdio.h>
#include <stdlib.h>
struct urraa
{
    int id;
    char phone[20], name[20], address[20];
};
void main()
{
    FILE *weee;
    weee = fopen("ccn.txt", "r");
    if (weee == NULL)
    {
        printf("Error in reading the file");
        exit(0);
    }

    struct urraa weeee[10];
    for (int i = 0; i < 10; i++)
    {
        fscanf(weee, "%s%d%s%s", weeee[i].name, &weeee[i].id, weeee[i].phone, weeee[i].address);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\t %s \t %d \t %s \t %s \n", weeee[i].name, weeee[i].id, weeee[i].phone, weeee[i].address);
    }
    fclose(weee);
}