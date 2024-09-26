#include<stdio.h>
int main()
{
 int n,i,r,sum=0,sum2=0,a,j,b;
 printf("Enter any number:");
 scanf("%d",&n)
     for(i=n;i!=0;i=i/10)
     {
         r=i%10;
         sum=sum+r;
     }
     a=sum;
  for(j=a;j!=0;j=j/10)
  {
    b=j%10;
    sum2=sum2+b;
  }
  printf("\n Generic root of number is:%d",sum2);
    return 0;
}
