// Menu Driven Program using switch case in C
#include <stdio.h>

// Driver code
int main()
{
    // Switch variable
    int choice = -1;

    // Menu display
    printf("MENU:\n1. Coffee\n2. Tea\n3. Exit");

    // Flag variable for termination of loop
    int flag = 1;

    // Infinite Loop for choice input
    while (flag)
    {
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        // Switch statements
        switch (choice)
        {
        case 1:
            printf("> Enjoy your Coffee!\n");
            break;
        case 2:
            printf("> Enjoy your Tea!\n");
            break;
        case 3:
            printf("BYE!!!\n");
            flag = 0; // To terminate the loop
            break;
        default:
            printf("> Invalid Input\n");
            break;
        }
    }
    return 0;
}
