#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a;
    char b[20];
    FILE *addi;
    addi = fopen("ccn.txt", "a");
    if (addi == NULL)
    {
        printf("Error in opeaning ccn.txt");
        exit(0);
    }
    scanf("%s%d", b, &a);
    fprintf(addi, " Kisnu ki %s is %dcm", b, a);
    fclose(addi);
}