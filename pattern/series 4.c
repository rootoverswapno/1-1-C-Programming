#include<stdio.h>
int main()
{
    int i,n,j=2,sum=0;
printf("Enter any series last number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+(i*i);
    if(i<n)
    {
        printf("%d^%d+",i,j);

    }
    else
    {
        printf("%d^%d",i,j);
    }
}
printf("\nsumation is %d",sum);

    return 0;
}
