# include<stdio.h>
int oddnum(int,int);

int main()
{
    int n,i=1;
    printf("enter value of number: ");
    scanf("%d",&n);
    //printf("entered number: %d",n);
    oddnum(i,n);
    //printf("%d",s);

    return 0;
}
int oddnum(int i,int n)
{
    if(i==n)
        return 1;
    else
    return oddnum(i+2,n);
}
