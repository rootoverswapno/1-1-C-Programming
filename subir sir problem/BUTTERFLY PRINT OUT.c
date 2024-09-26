#include<stdio.h>
int main()
{
    int n,i,j,k,sum=0,m;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<i;j++)
        {
          k*=i;
        }
        if(i<n)
        {
            printf("%d+",k);
        }
        else
        {
              printf(" %d",k);
        }


        sum+=k;
    }
    printf("\n\nsum is %d",sum);


    return 0;
}
