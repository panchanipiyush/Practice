# include<stdio.h>
void fun()
{
    char c;
    scanf("%c",&c);

    if(c!='\n');
    {
        fun();
        printf("%c",c);
    }
}
int main()
{
    printf("Enter any string:");
    fun();
    return 0;
}
