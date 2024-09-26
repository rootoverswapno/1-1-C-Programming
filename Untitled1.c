#include<stdio.h>
int main()
{
    int n,p=0,i;
 scanf("%d",&n);
 for(i=1;n!=0;i++)
 {
     n=n/10;
     p++;
 }
 printf("%d",p);


    return 0;
}
