# include<stdint.h>
int main()
{
    char ch;
    printf("enter charcter: ");
    scanf("%c",&ch);
    
   /* if(ch>='0' && ch<='9')
    {
        printf("%c is Digit ",ch);
    
    }
    else
    {
        printf("%c is Not a Digit ",ch);
    }*/
    (ch>='0' && ch<='9') ? printf("charcter is Digit") : printf("character is not a Digit");


    return 0;
}