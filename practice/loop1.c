#include<stdio.h>
int main()
{
    int i,sum=0,n;
    float avg;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
    }
    printf("%d",sum);
    avg=(float)sum/n;
 printf("avg is %f",avg);

    return 0;
}
