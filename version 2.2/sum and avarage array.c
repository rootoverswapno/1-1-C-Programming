#include<stdio.h>
#define  maxsize 10
int main()
{
  int  i,sum=0;
  int a[maxsize];
  for(i=0;i<maxsize;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<maxsize;i++)
  {
      printf("\n%d\n",a[i]);
  }
  for(i=0;i<maxsize;i++)
  {
      sum=sum+a[i];
  }
printf("%d",sum);


    return 0;
}
