#include<stdio.h>
int main()
{
int amount,total_1000,total_500,a,b,total_200,c,total_100,d,total_50;

      printf("Enter amount:");

scanf("%d",&amount);
 n
           total_1000=(int)amount/1000;

      printf("total 1000 is :%d\n",total_1000);

a=(amount-(total_1000*1000));

           total_500=(int)a/500;

      printf("total 500 is:%d\n",total_500);
b=(amount-((total_1000*1000)+(total_500*500)));
            total_200=(int)b/200;
      printf("total 200 is:%d\n",total_200);
c=(amount-((total_1000*1000)+(total_500*500)+(total_200*200)));
            total_100=(int)c/100;
      printf("total 100 is:%d\n",total_100);
d=(amount-((total_1000*1000)+(total_500*500)+(total_200*200)+(total_100*100)));
            total_50=(int)d/50;
      printf("total 50 is:%d",total_50);



    return 0;
}
