# include<stdio.h>
# include<string.h>
int main ()
{
    char string[50];
    int size,rev;
    printf("Enter a string: ");
    scanf("%s",&string);
    /*for(int i=0;i<=size;i++)
    {
        scanf("%d",&string[i]);
    }*/
    rev=strlen(string)-1;
    
    for(int i=rev-1;i>=0;i--)
    {
        printf("%s",string[i]);
    }

    return 0;
}