#include <stdio.h>
int find_minimum(int[], int);
int main()
{
    int i, array[100], size, location, minimum;
    printf("Input number of elements in array\n");
    scanf("%d", &size);

    printf("Input %d integers\n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    location = find_minimum(array, size);
    minimum = array[location];

    printf("Minimum element location = %d and value = %d.\n", location + 1, minimum);
    return 0;
}
int find_minimum(int a[], int n)
{
    int i,minimum, index = 0;
    for (i = 1; i < n; i++)
        if (a[i] < minimum)
            index = i;
    return index;
}