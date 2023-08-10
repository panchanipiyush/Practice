# include<stdio.h>

int main()
{
    // int n=5,m=1;
    // for (int i=1 ; i<6 ;i++)
    // {
    //     for (int j=1;j<n;j++)
    //     {
    //         printf(" ");
    //     }
    //     n--;
    //     for (int k=0;k<m;k++)
    //     {
    //         printf("* ");
    //     }
    //     m++;
    //     printf("\n");
    // }

    int n=1,m=1;
    for (int i=1 ; i<=5;i++)
    {
        for (int j=1;j<n;j++)
        {
            printf(" ");
        }
        n--;
        for (int k=0;k<i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}