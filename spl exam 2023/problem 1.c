#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

    if(i==1)
    printf("1");
    else
       printf("+(");

        for(j=1;j<=2*i-1;j=j+2)
    {

        sum=sum+j;
        if(j<(2*i-1))
        {
            printf("%d+",j);
        }

    }
}
printf("\n\n%d",sum);




    return 0;
}
