#include<stdio.h>
int main()
{
 int n1,n2,k;
 printf("Enter number 1:")   ;
 scanf("%d",&n1);
 printf("Enter number 2:");
 scanf("%d",&n2);
 k=n1;
 n1=n2;
 n2=k;
 printf("number 1 is :%d\n",n1);
 printf("number 2 is :%d",n2);
    return 0;
}
