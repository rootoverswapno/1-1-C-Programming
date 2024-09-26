#include<stdio.h>
int main()
{
 int a,b,c,min,max;
 printf("Enter two number:");
 scanf("%d%d%d",&a,&b,&c);
min=(a<b)?(a<c&&a<d?a:c):(b<c&&b<d?b:c);
printf("%d",min);
max=(a>b)?(a>c?a:c):(b>c?b:c);
printf("\n%d",max);





    return 0;
}
