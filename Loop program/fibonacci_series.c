# include<stdio.h>
int main()
{
    int f=0,s=1,next,i,no;
    printf("Enter number of terms : ");
    scanf("%d",&no);

    printf("First %d terms of Fibonacci series: ",no);
    for(i = 0 ; i<=no  ;i++)
    {
        printf("%d",f);
            next = f+s;
            f=s;
            s=next;
        
        
    }
    return 0;
}