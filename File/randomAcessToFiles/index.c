#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("student.txt","rb");
    if (fp == NULL)
    {
        printf("Error: Cannot open");
        // return ; 
    }
    printf("\n Position Pointer = %ld\n", ftell(fp));
    fseek(fp, 0, 2);
    printf("\n Position Pointer = %ld\n", ftell(fp));
    rewind(fp);
    printf("\n Position Pointer = %ld\n", ftell(fp));
    fclose(fp);
    return 0;
}