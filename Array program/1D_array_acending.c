# include<stdio.h>
int main()
{ 
    int a[10],b[10],i,j,c;
    printf("Enter element for array 1: \n");
    for ( i=0; i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        for ( i = 0; i < 5 ; i++)
        {
            for ( j = i+1; j < 5; j++)
            {
                if(a[i]>a[j])
                {
                    c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            } 
        }
        printf("Ascending order array 1 element: ");
    for ( i=0; i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
   

