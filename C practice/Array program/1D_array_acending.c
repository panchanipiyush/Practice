#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    printf("Enter element for array 1: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order array 1 element: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
