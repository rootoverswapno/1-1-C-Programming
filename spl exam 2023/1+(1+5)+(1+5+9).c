#include<stdio.h>
int main()
{
    int n,i,j,a,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i>1)
        {
            printf("+(");
        }
        a=1;
        for(j=1; j<=i; j++)
        {
            sum=sum+a;
            if(i==1)
            {
                printf("1");
            }
            else if(i>j)
            {
                printf("%d+",a);
            }
            else if (i!=1&&i==j)
            {
                printf("%d)",a);
            }
            a=a+2;
        }



    }
    printf("\n\n%d",sum);



    return 0;
}
