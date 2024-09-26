#include<stdio.h>
int main()
{
  int sum,avg,i,n,a[100];
  printf("Enter number:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    // printf("Enter number %d:",i+1);
     scanf("%d",&a[i]);
     sum=sum+a[i];

  }
 avg=(float)sum/n;
 printf("avg is %d\n",sum);
 printf("avg is %d",avg);


    return 0;
}
