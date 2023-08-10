#include <stdio.h>
int main()
{
    int i, j, k=1,m=1;

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {    
            printf(" ");
        }
        --k;
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
       // m+2;
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}*/
