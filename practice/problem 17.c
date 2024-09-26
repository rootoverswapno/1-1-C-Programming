#include<stdio.h>
int main()
{
   int s;
   int h,m,a,sec;
   printf("Enter second:") ;
   scanf("%d",&s);
   h=s/3600;
  // printf("hour is %d\n",h);
   a=s-(3600*h);
   m=a/60;
  // printf("minute is %d",m);
   sec=(s-((3600*h)+(m*60)));
  // printf("second is :%d",sec);
  printf("H:M:S-%d:%d:%d",h,m,sec);?;/;/; hge6f



    return 0;
}
