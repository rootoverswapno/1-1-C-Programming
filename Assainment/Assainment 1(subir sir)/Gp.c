#include<stdio.h>
int main()
{
 float a,r,n,i,j=1,GP;
 printf("Enter Geometric progression last number n=");
 scanf("%f",&n);
 printf("\nEnter Geometric progression first number a=");
 scanf("%f",&a);
 printf("\nEnter Geometric progression common ratio r=");
scanf("%f",&r) ;
for(i=1;i<=n;i++)
{
j=j*r;
}

GP=a*((1-j)/(1-r));
printf("GP=%.2f",GP);

    return 0;
}
