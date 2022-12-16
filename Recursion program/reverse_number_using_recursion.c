# include<stdio.h>
# include <math.h>
int reverse(int num, int length)
{
        if (length==1)
        {
            return 1;
        }
        else
        return (((num%10)*pow(10,length-1))+reverse(num/10,--length));
}
int main()
{   
    int num, result;
    int temp, length=0;
    printf("Enter integer number for reverse: ");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        length++;
        temp= temp/10;
    }
    result = reverse(num,length);
    printf("The reverse of %d is %d.\n",num,result);
        return 0;
}