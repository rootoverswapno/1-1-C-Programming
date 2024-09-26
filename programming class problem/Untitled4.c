#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter two number:");
  scanf("%d %d",&a,&b);
  if(a==b)
  {
    printf("number are equal\n");
  }
  else
  {
      if(a>b)
      {
          printf("The maximum value is : %d\n",a);
      }
      else
      {
          printf("The maximum value is : %d\n",b);
      }
  }

    return 0;
}
