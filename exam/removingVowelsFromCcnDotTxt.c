#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *ccn, *naya;
    char newName[50], re, oldName[50];
    printf("wot was old name of file");
    scanf("%s", oldName);
    printf(" Give the new name for ccn.txt");
    scanf("%s", newName);
    // rename("MasterCCN.txt", newName); // yo parra ley hunna, yeslay file name noi change hannnni dinxa yippi

    ccn = fopen(oldName, "r");
    naya = fopen(newName, "w");
    if (ccn == NULL && naya == NULL)
    {
        printf("error on opeaning file");
        exit(0);
    }
    while (106)
    {
        re = fgetc(ccn);
        if (re == EOF)
        {
            break;
        }
        else
        {
            if (re != 'a' && re != 'A' && re != 'e' && re != 'E' && re != 'i' && re != 'I' && re != 'o' && re != 'O' && re != 'u' && re != 'U')
            {
                fputc(re, naya);
            }
        }
    }
    fclose(ccn);
    fclose(naya);
    printf("Removal of vowel from ccn.txt success");
}