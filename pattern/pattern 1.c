#include<stdio.h>
int main()
{
  while(1)
    {
        int i,n,sum=0;
        printf("Enter a number");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
            if(i<n)
            {
                printf("%d+",i);
            }
            else
            {
                printf("%d\n",i);
            }
        }
        printf("sum is %d\n",sum);
    }


    return 0;
}
