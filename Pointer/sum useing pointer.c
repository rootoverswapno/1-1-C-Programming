#include<stdio.h>
int main()
{
  int x,y,sum,*p1,*p2;
  scanf("%d%d",&x,&y);
  p1=&x;p2=&y;
  sum=*p1+*p2;
  printf("sum is:%d",sum);
  getch()  ;
  return 0;
}
