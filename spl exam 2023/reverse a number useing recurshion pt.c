#include<stdio.h>
int n,sum=0,rev,r1;

int r(n)
{
    if(n!=0)
    {
        r1=n%10;
        sum=sum*10+r1;
        r(n/10);
    }
    else{
        return sum;
    }
}
int main()
{
  printf("Enter a number:");
  scanf("%d",&n);
  rev=r(n);
  printf("Enter reverse number is:%d",rev);

    return 0;
}
