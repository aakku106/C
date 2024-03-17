#include <stdio.h>
#include <stdlib.h>
void next();
void main()
{
    // FILE *fp;
    // char filename[20], c;
    // printf("\n filname");
    // gets(filename);
    // fp = fopen(filename, "w");
    // if (fp == NULL)
    // {
    //     printf("Cant open file %s\n", filename);
    //     return;
    // }
    // printf(" FIle opeaned\n");
    // printf("Enter Characters:\n");
    // while (c = getchar() != '\n')
    //     fputc(c, fp);
    // fclose(fp);
    next();
}
void next()
{
    FILE *fp;
    char filename[20], c;
    printf("\n filname");
    gets(filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cant open file %s\n", filename);
        return;
    }
    printf(" FIle opeaned \n");
    printf("content in file: \n");
    while (c = fgetc(fp) != '\n')
        putchar(c);
    fclose(fp);
}
void another()
{
    FILE *fp;
    char filename[20], c;
    printf("\n filname");
    gets(filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cant open file %s\n", filename);
        return;
    }
    printf(" FIle opeaned \n");
    printf("content in file: \n");
    while (c = fgetc(fp)!= EOF)
        putchar(c);
    fclose(fp);
}
// 8.  Given a text file, create another text file deleting all thw vowels.