#include<stdio.h>
int main()
{
     int n,i,m,sum=0;
     printf("Enter the number:");
     scanf("%d",&n);
     m=n/2;
     for(i=1;i<=m;i++)
     {
         if(n%i==0)
         sum=sum+i;
     }
     if(sum==n)
     {
       printf("%d is a perfect number",n);
     }
     else
     {
         printf("%d is not a perfect   number",n);
     }

    return 0;
}
