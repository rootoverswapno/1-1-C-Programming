#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter triangle three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(b==c&&a==c)
    {
        printf("triangle is equilateral\n");

    }


         if(a==b&&a!=c&&b!=c)
         {
             printf("triangle is isosceles");
         }
         if(a!=b&&b!=c&&c!=a)
         {
             printf("triangle is scalene");
         }


    return 0;
}
