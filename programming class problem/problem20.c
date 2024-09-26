#include<stdio.h>
int main()
{
   float  salary,basic;
   printf("Basic salary of a employee = ");
   scanf("%f",&basic);
   if(basic<=10000)
   {
       salary=(0.2*10000+0.8*10000+basic);
       printf("%.2f is total salary",salary);

   }
   if(basic<=20000)
   {
       salary=(0.25*20000+0.9*20000+basic);
       printf("%.2f is total salary",salary);

   }
   if(basic>20000)
   {
       salary=(0.3*20000+0.95*20000+basic);
       printf("%.2f is total salary",salary);

   }
    return 0;
}
