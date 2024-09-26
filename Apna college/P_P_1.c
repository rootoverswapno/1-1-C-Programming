#include <stdio.h>
int main()
{
 int a,b,c,d;
 printf("Enter Four number:");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b)
 {
     if(a>c)
     {
         if(a>d)
         {
             printf("%d is maximum of %d %d %d %d",a,a,b,c,d);
         }
         else
         {
             printf("%d is maximum of %d %d %d %d",d,a,b,c,d);
         }

     }
   // else
    //{
        // printf("%d is maximum of %d %d %d %d",c,a,b,c,d);
    //}
 }
 else
 {
     if(b>c)
     {
         if(b>d)
         {
             printf("%d is maximum of %d %d %d %d",b,a,b,c,d);
         }
         else
         {
             printf("%d is maximum of %d %d %d %d",d,a,b,c,d);
         }
     }
     else
     {
      printf("%d is maximum of %d %d %d %d",c,a,b,c,d);
     }

 }
 if(d>c)
 {
     if(d>b)
     {
         if(d>a)
         {
             printf("%d is maximum of %d %d %d %d",d,a,b,c,d);
         }
     }
 }
 else
    printf("%d is maximum of %d %d %d %d",c,a,b,c,d);





    return 0;
}
