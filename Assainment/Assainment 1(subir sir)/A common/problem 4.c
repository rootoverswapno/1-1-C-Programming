#include<stdio.h>
int main()
{
    int n,i,j,k,sum=0,f;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
   {
       f=1;
       j=i%10;
       for(k=1;k<=j;k++)
       {
           f=f*k;
       }
       sum=sum+f;
   }
   if(n==sum)
   {
       printf("%d number is Strong",n);
   }
   else
   {
       printf("%d number is not Strong",n);
   }



    return 0;
}
