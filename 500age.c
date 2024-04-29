#include <stdio.h>

int main()
{
    int sum = 0, avg, age[500];
    for (int i = 0; i < 500; i++)
    {
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &age[i]);
        sum = sum + age[i];
    }
    avg = sum / 500;
    printf("The average age of 500 person is: %d\n", avg);
    for (int i = 0; i < 500; i++)
    {
        if (age[i] >= 25 && age[i] <= 30)
        {
            printf("The age of person between 25 to 30 is: %d\n", age[i]);
        }
    }
    return 0;
}