#include <stdio.h>
void main()
{
    FILE *ccn, *newf;
    char newName[50], fill, oldName[50];
    printf("wot was old name of file");
    scanf("%s", oldName);
    printf(" Give the new name for ccn.txt");
    scanf("%s", newName);
    // rename("MasterCCN.txt", newName); // yo parra ley hunna, yeslay file name noi change hannnni dinxa yippi

    ccn = fopen(oldName, "r");
    newf = fopen(newName, "w");
    while (106)
    {
        fill = fgetc(ccn);
        if (fill == EOF)
        {
            break;
        }
        else
        {
            fputc(fill, newf);
        }
    }
    printf("Fully coppy bhayying..");
    fclose(ccn);
    fclose(newf);
}