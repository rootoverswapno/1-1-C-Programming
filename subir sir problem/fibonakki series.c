#include<stdio.h>
int main()
{
 int n,i,sum=0,a=1,b=1,c;
 printf("Enter number :")   ;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     sum=sum+a;
     c=a+b;
     a=b;
     b=c;

 }
 printf("sum is %d",sum);



    getch();
    return 0;
}
