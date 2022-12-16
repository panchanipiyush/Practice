# include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        //printf("enterd number: %d",n);
        sum += i;
        //printf("sum of given num : %d",sum);
    }
    printf("sum of given num : %d",sum);

    /*while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of Digits: %d",sum);*/
   
    return 0;    
}