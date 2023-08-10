#include<stdio.h>
int main()
{
      int num,i=1,c=0;
      printf("/*To Check Number Prime or Not*/\n\nEnter Number : ");
      scanf("%d",&num);
      while(i<=num)
      {
            if(num%i==0)
            c++;
            i++;
      }
      if(c==2)
            printf("\n%d is Prime Number",num);
      else
            printf("\n%d is Not Prime Number",num);
      return 0;
}
/*
using while loop->
#
include<stdio.h>
int main()
{
    int num,i=2;
    printf("n Enter a number:");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
            break;
        i++;
    }
    if(i==num)
        printf("\n %d is a Prime Number",num);
    else
        printf("\n %d is not a Prime Number",num);
    return 0;
}*/
/*
using do while loop->
#include<stdio.h>
int main()
{
    int num,i=2;
    printf("\n Enter a number:");
    scanf("%d",&num);
    do
    {
        if(num%i==0)
        {
            break;
        }
        i++;
    }while(i<num);
    if(i==num)
        printf("\n %d is a prime number",num);
    else
         printf("\n %d is not a prime number",num);
 
    return 0;
}*/