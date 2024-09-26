#include<stdio.h>
int main()
{
   int x,y;
   float z;
   printf("Input total distance in km:");
   scanf("%d",&x);
   printf("Input total fuen spent in liter:");
   scanf("%d",&y);
   z=(float)x/y;
   printf("Average consumption (km/lt)=%.3f",z);



    return 0;
}
