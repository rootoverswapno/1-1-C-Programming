#include<stdio.h>
int main()
{
    int a,b,c,d;
    float f;
    printf("enter value:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    f=(float)sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    printf("distance is %f",f);


    return 0;
}
