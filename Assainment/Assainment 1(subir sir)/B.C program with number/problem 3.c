#include<stdio.h>
int main()
{
 int base,power,i,r=1;
 printf("Enter base:");
 scanf("%d",&base);
 printf("Enter power:");
 scanf("%d",&power);
  for(i=power;i!=0;i--)
  {
      r=r*base;
  }
  printf("%d",r);

    return 0;
}
