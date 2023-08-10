# include<stdio.h>
int main()
{ 
    int a[10],b[10],i,j,c;
    printf("Enter element for array 1: \n");
    for ( i=0; i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element for array 2: \n");
    for ( i=0; i<5;i++)
    {
        scanf("%d",&b[i]);
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
        for ( i = 0; i < 5 ; i++)
        {
            for ( j = i+1; j < 5; j++)
            {
                if(a[i]<a[j])
                {
                    c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
            
        }
        printf("descending order array 1 element: ");
    for ( i=0; i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for ( i = 0; i < 5 ; i++)
        {
            for ( j = i+1; j < 5; j++)
            {
                if(b[i]>b[j])
                {
                    c=b[i];
                    b[i]=b[j];
                    b[j]=c;
                }
            }
            
        }
    printf("\n");
        printf("Ascending order array 2 element: ");
    for ( i=0; i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
        for ( i = 0; i < 5 ; i++)
        {
            for ( j = i+1; j < 5; j++)
            {
                if(b[i]<b[j])
                {
                    c=b[i];
                    b[i]=b[j];
                    b[j]=c;
                }
            }
            
        }
        printf("Descending order array 2 element: ");
    for ( i=0; i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
   

