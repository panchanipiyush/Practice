# include<stdio.h>

int main()
{
    int n=4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        n--;
        for (int k = 0; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    

    return 0;
}