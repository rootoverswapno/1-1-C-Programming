#include<stdio.h>
int main()
{
int n,r,i,j=1,b=0;
printf("Enter a decimal number:");
scanf("%d",&n);
for(i=n;i!=0;i=i/2)
{
    r=i%2;
    b=b+(r*j);
    j=j*10;
}
printf("%d",b);


    return 0;


}
