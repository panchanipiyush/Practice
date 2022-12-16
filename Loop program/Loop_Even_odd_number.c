#include<stdio.h>  
  
int main()  
{  
    int start, end, temp;  
  
    printf("Enter start value and end value to generate Even no's\n");  
    scanf("%d%d", &start, &end);  
  
    if(start > end)  
    {  
        temp  = start;  
        start = end;  
        end   = temp;  
    }  
  
    printf("Even numbers between %d and %d are:\n", start, end);  
  
    for(int i = start; i <= end; i++)  
    {  
        if(i % 2 == 0) 
        {  
            printf("%d ", i);  
        }  
    }  
    printf("\n");
  printf("odd numbers between %d and %d are:\n", start, end);  
  
    for(int i = start; i <= end; i++)  
    {  
        if(i % 2 != 0) 
        {  
            printf("%d ", i);  
        }  
    }  
  
    return 0;  
}  
/*int j=i/2;
 int(j*2==i) without usin(%) operator.*/