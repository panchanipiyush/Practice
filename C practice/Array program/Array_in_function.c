# include<stdio.h>
void printNumbers(int arr[], int num);     // replace arr[] whenever *arr

int main()
{
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr,6);

    return 0;
}

void printNumber(int arr[], int num);  // replace arr[] whenever *arr
{
    for (int i = 0; i < num; i++)
      { printf("%d \t",arr[i]);
}
    printf("\n");
}
