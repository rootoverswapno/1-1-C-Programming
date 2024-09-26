#include<stdio.h>
int main()
{
   int num,i,j=1,prod=1;

   printf("Enter any number:");
   scanf("%d",&num);
   if(num==0)
   {
       printf("0!=1");
   }
   for(i=num;i>=1;i--)
   {
        prod=i*prod;

if(i<=num)
{
if(i>1)
{
    printf("%d*",i);
}
else
    {
     printf("%d",i);
    }
}



   }
   printf(" \n\nFectorial of %d! is=%d\n",num,prod);


    return 0;
}
