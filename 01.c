#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf ("enter five numbers\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    scanf ("%d",&d);
    scanf ("%d",&e);
    sum=a+b+c+d+e;
    avg=(float)sum/5;
    printf ("the avg is %f",avg);
    return 0;
}
