#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf("   ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==1||j==1||j==i)
            {
                printf("*     ");
            }
            else
            {
                printf("      ");
            }

        }
        printf("\n");

    }
    for(i=n-1; i>=1; i--)
    {
        for(int k=n-i; k>=1; k--)
        {
            printf("   ");
        }
        for(j=i; j>=1; j--)
        {
            if(i==1||j==1||j==i)
            {
                printf("*     ");
            }
            else
            {
                printf("      ");
            }

        }
        printf("\n");

    }
    return 0;
}
