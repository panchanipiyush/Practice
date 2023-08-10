# include<stdio.h>
int main()
{
    int i=0,max=0,n=0,nums[100]={0};
    printf("Please enter the value of number N: ");
    scanf("%d",&n);
    
    for(i;i<n;i++)
    {
        printf("\nPlease enter the value of %d :",i+1);
        scanf("%d",&nums[i]);
    }
    max = nums[0]; // show user entered value run one more (for loop)
    // printf("\nYou have enterd following values:\n");
    // for (i=0;i<n;i++)
    // {
    //     printf("%d ",nums[i]);
    // }

    for (i=1;i<n;i++)
    {
        if(nums[i]>max)       //if(max<nums[i]) for minimum num (nums[i]<max)--> max = nums[i],
        {
            max = nums[i];
        }
    }
    printf("\nMaximum value is %d\n",max);

    return 0;
}