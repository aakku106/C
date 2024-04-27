// Program to ask time in seconds and convert it into Hour,minute and seconds.
#include <stdio.h>
int main()
{
    int time, hour, minute, second;
    printf("Enter time in seconds: ");
    scanf("%d", &time);
    hour = time / 3600;
    time = time % 3600;
    minute = time / 60;
    second = time % 60;
    printf("Time is %d hour %d minute %d second", hour, minute, second);
    return 0;
}