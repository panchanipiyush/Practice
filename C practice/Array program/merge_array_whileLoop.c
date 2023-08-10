#include <stdio.h>
int main()
{
    int i, j, k, s1, s2, arr1[20], arr2[20], resarr[40];
    printf("enater size of array1: \n");
    scanf("%d", &s1);

    printf("enater size of array2: \n");
    scanf("%d", &s2);
    printf("Enter the element of array1: ");
    for (i = 0; i < s1; i++)
    {
        scanf("%d", arr1[i]);
    }
    printf("Enter the element of array2: ");
    for (j = 0; j < s2; j++)
    {
        scanf("%d", arr1[j]);
    }

    while (i < s1 && i < s2)
    {
        if (arr1[i] < arr2[j])
        {
            resarr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            resarr[k] = arr2[j];
            j++;
            k++;
        }
        while (i < s1)
        {
            resarr[k] = arr1[i++];
        }
        while (j < s2)
        {
            resarr[k] = arr2[j++];
        }
        printf("%d", resarr[k]);
    }
    return 0;
}