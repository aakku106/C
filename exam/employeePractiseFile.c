#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char phone[20];
    char name[20], address[20];
};
void main()
{
    struct employee ccn[10];
    printf("give the \t name \t id \t phone \t and \t address\nof ur employees\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s%d%s%s", ccn[i].name, &ccn[i].id, ccn[i].phone, ccn[i].address);
    }
    FILE *ccn_e;
    ccn_e = fopen("ccn.txt", "w");
    fprintf(ccn_e, "\t |Name \t id   \t Phone           \t Address|\n");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ccn_e, "\t %s \t %d \t %s \t %s \n", ccn[i].name, ccn[i].id, ccn[i].phone, ccn[i].address);
    }
    fclose(ccn_e);
}