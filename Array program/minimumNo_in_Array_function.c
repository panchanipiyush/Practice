#include<stdio.h>
int findSmallest(int [], int);
int main()
{
    int arr[50], small, i, size;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    printf("Enter %d Array Elements: \n", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    small=findSmallest(arr, size);
    printf("\nSmallest Number = %d", small);
    return 0;
}
int findSmallest(int arr[], int n)
{
    int i=0, small;
    small=arr[i];
    for(i=0;i<n;i++)
    {
        if(small>arr[i])
            small = arr[i];
    }
    return small;
}