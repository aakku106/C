//store 1 to 20 in a file and display its multiple by 2.
#include <stdio.h>
int main()
{
    FILE *fp;
    int i;
    fp = fopen("file.txt", "w");
    for (i = 1; i < 21; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
    fp = fopen("file.txt", "r");
    for (i = 1; i < 21; i++)
    {
        fscanf(fp, "%d", &i);
        printf("%d\n", i * 2);
    }
    fclose(fp);
    return 0;
}

