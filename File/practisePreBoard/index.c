#include <stdio.h>
#include <stdlib.h>
void read();
void main()
{
    FILE *ccn;
    int a;
    char b[20];
    scanf("%d", &a);
    scanf("%s", b);
    ccn = fopen("ccn.txt", "w");
    if (ccn == NULL)
    {
        printf("ccn.txt not found");
        exit(0);
    }

    fprintf(ccn, "%d\n", a);
    fprintf(ccn, "%s\n", b);
    fclose(ccn);
    read();
}
void read()
{
    FILE *ccn;
    ccn = fopen("ccn.txt", "r");
    if (ccn == NULL)
    {
        printf("ccn.txt not found");
        exit(0);
    }
    int a;
    char b[20];
    fscanf(ccn, "%d", &a);
    fscanf(ccn, "%s", b);
    printf("%d,%s", a, b);
    fclose(ccn);
}