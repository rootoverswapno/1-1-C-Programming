#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter number of series:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      sum+=i;
      if(i<n)
      {
          printf("%d+",i);
      }
      else
      {
          printf("%d=",i);
      }
  }
  printf("\nSummetion is:%d",sum);
    return 0;
}
