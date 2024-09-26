#include<stdio.h>
int main()
{
    int n,i,j,sum=0,pow;
    printf("Enter number of series:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("%d^%d+",i,i-1);
        }
        else
        {
            printf("%d^%d",i,i-1);
        }

        pow=1;
        for(j=1; j<i; j++)
        {

            pow=pow*i;
        }
        sum=sum+pow;
    }

    printf("\n\n%d",sum);




    return 0;
}

