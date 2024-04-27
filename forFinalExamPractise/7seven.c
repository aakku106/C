// create a file named 7seven.txt and write Ram, sita, Govinda .
// creat another file named 7sevenNew.txt replacing Ram to Hari Sita to Gita abd Govinda to Shiva.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1 = fopen("/home/aakku/Documents/c-prog/forFinalExamPractise/7seven.txt", "w");
    if (file1 == NULL)
    {
        printf("Error opening file 7seven.txt\n");
        return 1;
    }
    fprintf(file1, "Ram, sita, Govinda");

    char randomNames[10][50] = {
        "John",
        "Emma",
        "Michael",
        "Sophia",
        "William",
        "Olivia",
        "James",
        "Ava",
        "Benjamin",
        "Isabella"};
    for (int i = 0; i < 10; i++)
    {
        fprintf(file1, ", %s", randomNames[i]);
    }

    fclose(file1);

    FILE *file2 = fopen("/home/aakku/Documents/c-prog/forFinalExamPractise/7sevenNew.txt", "w");
    if (file2 == NULL)
    {
        printf("Error opening file 7sevenNew.txt\n");
        return 1;
    }

    FILE *file1Copy = fopen("/home/aakku/Documents/c-prog/forFinalExamPractise/7seven.txt", "r");
    if (file1Copy == NULL)
    {
        printf("Error opening file 7seven.txt\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file1Copy))
    {
        // Replace Ram with Hari
        char *ptr = strstr(line, "Ram");
        if (ptr != NULL)
        {
            strncpy(ptr, "Hari", 4);
        }

        // Replace Sita with Gita
        ptr = strstr(line, "sita");
        if (ptr != NULL)
        {
            strncpy(ptr, "Gita", 4);
        }

        // Replace Govinda with Shiva
        ptr = strstr(line, "Govinda");
        if (ptr != NULL)
        {
            strncpy(ptr, "Shiva", 5);
        }

        fprintf(file2, "%s", line);
    }

    fclose(file1Copy);
    fclose(file2);

    return 0;
}
