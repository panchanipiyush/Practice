# include<stdio.h>
void print_reverse(char *s)
{   
    if (*s != '\0')
    print_reverse(s+1);
    printf("%c", *s);
}

int main()
{
    char s[100] = " i am piyush panchani";
   // printf("Enter a any string: ");
    scanf("%c",&s);
    print_reverse(s);
    printf("\n");

    return 0;
}
/*void print_reverse(char *s)
{   
    if (*s != '\0')
    {
        print_reverse(s+1);
        printf("%c", *s);
    }
}*/