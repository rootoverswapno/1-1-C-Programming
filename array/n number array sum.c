#include<stdio.h>
int main()
{
  int n,a[100],sum=0,i,avg;
  printf("Enter number:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("Enter number%d:",i+1);
      scanf("%d",&a[i]);
      sum=sum+a[i];
      avg=sum/n;
  }
  printf("sum is %d\n",sum);
  printf("avg is %d",avg);



    return 0;
}
