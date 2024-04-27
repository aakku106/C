#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    FILE *fp1, *fp2;
    char c[10], cn;
    fp1 = fopen("name.txt", "w");
    if (fp1 == NULL)
    {
        printf("error");
        exit(1);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter names: ");
        scanf("%s", c);
        fprintf(fp1, " %s ", c);
    }
    printf(" urrraa successfull");

    fclose(fp1);

    fp1 = fopen("name.txt", "r");
    fp2 = fopen("name2.txt", "w");
    if (fp2 == NULL)
    {
        printf("error");
        exit(1);
    }
    while (106)
    {
        cn = fscanf(fp1, " %s ", c);
        if (cn == EOF)
        {
            break;
        }
        else
        {
            if (strcmp(c, "Ram") == 0)
            {
                fprintf(fp2, "Hari");
            }
            else if (strcmp(c, "Sita") == 0)
            {
                fprintf(fp2, "Gita");
            }
            else if (strcmp(c, "Govinda") == 0)
            {
                fprintf(fp2, "Shiva");
            }
            else
            {
                fprintf(fp2, "%s", c);
            }
        }
    }
    printf("success");
    fclose(fp2);
}