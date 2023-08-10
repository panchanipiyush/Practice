# include<stdio.h>
 int main()
 {
    char str[10],i;
    gets(str);
    //for ( i = 0;str[i]!=0; i++);
    i=0;
    while (str[++i]!='\0');
    printf("\n Length of string: %d",i);
    
    return 0;
 }