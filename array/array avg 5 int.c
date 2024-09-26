#include<stdio.h>
int main()
{
  int a[5],i,sum=0,avg;
   a[0]=10;
   a[1]=20;
   a[2]=30;
   a[3]=40;
   a[4]=50;
   for(i=0;i<5;i++)
   {
       sum=sum+a[i];
   }
   printf("sum is %d \n",sum);
   avg=sum/5;
   printf("avg is %d",avg);


    return 0;
}
