#include <stdio.h>
int main()
{
    int arr1[3], arr2[2], arr3[5], i, j = 0; // size1,size2,size3;
    // printf("enater size of array1 and array 2: \n");
    // scanf("%d \n %d",&size1,&size2);

    printf("Enater element for array1: ");
    for (i = 0; i < 3; i++)
        ;
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enater element for array2: ");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // copy elements of array1 in to array3
    for (i = 0; i < 3; i++)
    {
        arr3[j] = arr1[i];
        j++;
    }
    // copy elements of array2 in to array3
    for (i = 0; i < 2; i++)
    {
        arr3[j] = arr2[i];
        j++;
    }
    // Result array after merging.
    printf("Element of Array3: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr3[i]);
    }
    return 0;
}