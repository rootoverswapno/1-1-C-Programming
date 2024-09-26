#include<stdio.h>
int main()
{
    int a,b,d,c;
    float x1,x2;
    printf("ax^2+bx+c\n");
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("Enter value for c:");
    scanf("%d",&c);
    d=sqrt(b*b-4*a*c);
    x1=(float)(-b+d)/2*a;
    x2=(float)(-b-d)/2*a;
    printf("%.2f is x1\n",x1);
    printf("%.2f is x2",x2);
return 0;

}
