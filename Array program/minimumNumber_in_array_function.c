#include <stdio.h>
int find_minimum(int[], int);
int main()
{
    int c, array[100], size, location, minimum;
    printf("Input number of elements in array\n");
    scanf("%d", &size);

    printf("Input %d integers\n", size);

    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);

    location = find_minimum(array, size);
    minimum = array[location];

    printf("Minimum element location = %d and value = %d.\n", location + 1, minimum);
    return 0;
}
int find_minimum(int a[], int n)
{
    int c,minimum, index = 0;
    for (c = 1; c < n; c++)
        if (a[c] < minimum)
            index = c;
    return index;
}