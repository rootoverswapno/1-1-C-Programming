#include<stdio.h>
void main()
{
    int num,y,r,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);//125
    y=num;
    while(num!=0)
{
    r=num%10;//5,2,1
    sum=sum+r;//5,7,8
    num=num/10;//12,1,0

}
    printf(" summation of digit %d is %d",y,sum);



}
