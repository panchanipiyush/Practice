#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], answer[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter VAlue %d %d :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter VAlue %d %d :", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            answer[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                // answer[i][j] = answer[i][j] + (a[i][k] * b[k][j]);
                answer[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", answer[i][j]);
        }
        //printf("\n");
    }

       return 0;
   }