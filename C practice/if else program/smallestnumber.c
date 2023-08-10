# include<stdio.h>
int main()
{
    printf("write a program to print smalles no");
    int a,b,c;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter c =");
    scanf("%d",&c);
    if (a<b&&a<c){
        printf("a %d is smallest no",a);
    }else if(b<a&&b<c){
        printf("b %d is smallest no",b);
    }else{ 
        printf("c %d is smallest no",c);
    }
    return 0;
}
