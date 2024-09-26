#include<stdio.h>
int main()
{
  int n,mul=1,i,j=2;
  printf("Enter number:")  ;
  scanf("%d",&n);
  for(i=1;i<=n;i=i+1)
  {
      mul=mul*i*i;
      if(i<n)
      {
          printf("%d^%d*",i,j);
      }
      else
      {
          printf("%d^%d=\n",i,j);
      }
  }
  printf("multiplication is %d",mul);



    return 0;
}
