# include<stdio.h>
int main()
{
    int year,days;
    printf("Enater your year: ");
    scanf("%d",&year);

    days = year*365.2425;
    printf("Days is %d",days);
}