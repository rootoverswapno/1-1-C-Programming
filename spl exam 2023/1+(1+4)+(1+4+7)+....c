#include<stdio.h>
int main()
{
    int *p,sum=0,i,j,a;
    printf("Enter number:");
    scanf("%d",&a);
    p=a;
    for(i=1; i<=p; i++)
    {
        if(i==1)
        {
            printf("1");
        }
        else
        {
            printf("+(");
        }
        for(j=1; j<=3*i-2; j=j+3)
        {
            sum=sum+j;
            if(j<(3*i-2))
            {
                printf("%d+",j);
            }
            else if(j!=1)
            {
                printf("%d)",j);
            }
        }
    }
    printf("\n\nsum is : %d",sum);






}
