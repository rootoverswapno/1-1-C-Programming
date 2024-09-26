#include<stdio.h>
int main()
{
   int n,sum1,sum2,i,div;
   printf("Enter number:") ;
   scanf("%d",&n);
   for(i=1;i<=n;i=i+2)
   {
       sum1=sum1+i;
   }
   printf("sum1 is %d\n",sum1);
   for(i=2;i<=n;i=i+2)
   {
       sum2=sum2+i;
   }
   printf("sum2 is %d\n",sum2);
   div=(sum1-sum2);
   printf("summation is %d",div);

    getch();

    return 0;
}
