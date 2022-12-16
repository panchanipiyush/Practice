# include<stdio.h>
struct employee
{
    int number;
    char name[50];
    char address[100];
    int age;
};
int main()
{
    struct employee a;
    printf("Enter your employee detail number,name,address,age: ");
    scanf("%d %s %s %d",&a.number,a.name,a.address,&a.age);
        
    return 0;
}