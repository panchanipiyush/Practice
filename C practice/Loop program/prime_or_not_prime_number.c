#include <stdio.h> //https://www.w3schools.in/c-programming/examples/check-whether-the-given-number-is-a-prime
int main()
{
    int num, i, c = 0;
    printf("Enter any number n:");
    scanf("%d", &num);

    // logic
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("%d is a Prime number",num);
    }
    else
    {
        printf("n is not a Prime number");
    }
    return 0;
}

// Double click to edit the code
/*#include <stdio.h>
int main()
{
    int num, i;

    printf("\n Enter a number:");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("\n %d is not a prime number", num);
            break;
        }
    }
    if (i == num)
        printf("\n %d is a prime number", num);

    return 0;
}*/