#include <stdio.h>

int main()
{
    int day;
    printf("Enter number for choice days; ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("sunday");
    }
    else if (day == 2)
    {
        printf("monday");
    }
    else if (day == 3)
    {
        printf("tuesday");
    }
    else if (day == 4)
    {
        printf("wednesday");
    }
    else if (day == 5)
    {
        printf("thursday");
    }
    else if (day == 6)
    {
        printf("friday");
    }
    else if (day == 7)
    {
        printf("saturday");
    }
    else
    {
        printf("please enter valid number");
    }
    return 0;
}