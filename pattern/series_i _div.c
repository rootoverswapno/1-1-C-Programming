#include<stdio.h>
int main()
{
   float i,n,sum=0;
   printf("Enter number");
   scanf("%f",&n);
   for(i=1;i<=n;i++)
   {
       sum=sum+(1/i);
   }
   printf(" sum is %.2f ",sum);




    return 0;
}
