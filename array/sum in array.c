#include<stdio.h>
int main()
{
 /*int a[100],i,n,sum=0;
 printf("Input the number of elements to be store:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     printf("Elements-%d=",i);
     scanf("%d",&a[i]);
 }
for(i=1;i<=n;i++)
{
    sum=sum+a[i];
}
printf("sum is %d",sum);
*/
int a[100],i,n,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
    sum=sum+a[i];
}

printf("sum=%d",sum);
    return 0;
}
