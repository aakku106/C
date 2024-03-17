#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char data[50];
    fp = fopen("C:\\test.txt", "r");
    if (fp == NULL)
    {
        printf("file cant be opean\n");
        return; // exit(); //
    }
    printf("\n FIle is opened\n");
    fgets(data, 20, fp);
    printf("Data in file =%s\n", data);
    // fputs("Hello Ccn i study CSIT--------------------------------", fp);
    fclose(fp);
}
void new()
{
    FILE *fp;
    
    fp = fopen("C:\\test.txt", "a");
    if (fp == NULL)
    {
        printf("file cant be opean\n");
        return; // exit(); 
    }
    printf("\n FIle is opened\n");
    // fgets(data, 20, fp);
    printf("Data in file =%s\n", data);
    // fputs("Hello Ccn i study CSIT--------------------------------", fp);
    fclose(fp);
}