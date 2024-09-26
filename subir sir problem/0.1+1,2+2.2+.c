#include<stdio.h>
int main()
{
float n,i,sum=0,a=0.1,b=1.2,c;
  printf("Enter number:");
  scanf("%f",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+a;//0.1,1.3
c=a+b;//1.3,2.5,
a=b;//1.2,1.3,
b=c;//1.3,2.5

  }
  printf("sum is %.2f ",sum);

    getch();
    return 0;
}
\
