#include<stdio.h>
int main()
{
 int n,i,a=1,b=2,c,sum=0;
 printf("Enter series number:")   ;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     sum=sum+a;
     c=2*b;
     a=b;
     b=c;
 }
printf("%d",sum);
return 0;
}
