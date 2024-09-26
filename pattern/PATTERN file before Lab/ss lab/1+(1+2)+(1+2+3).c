#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter number:")   ;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     if(i==1)
     {
         printf("1");
     }
     else
     {
         printf("+(");
         for(j=1;j<=i;j++)
         {
             printf("%d",j);
             if(j!=i)
             {
                 printf("+");
             }

         }
         printf(")");
     }
 }



    return 0;
}
