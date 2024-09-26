#include<stdio.h>
int main()
{
   int a[100],n,i;
   printf("how many number")  ;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter number%d:",i+1);
       scanf("%d",&a[i]);
   }
   int min=a[0];
   for(i=1;i>n;i++)
   {
       if(min>a[i])
       {
           min=a[i];
       }
   }
   printf("%d is minimum",min);



    return 0;
}
