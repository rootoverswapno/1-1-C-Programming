#include<stdio.h>
int main()
{
 int a[100];
 int n,i,j,ct=0;

   printf("Input the number of elements:") ;
   scanf("%d",&n);
   printf("\nInput %d elements in the array:",n);
   for(i=1;i<=n;i++)
   {
       printf("Elements-%d :",i);
       scanf("%d",&a[i]);

   }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(a[i]==a[j])
            ct++;
           break;
       }
   }
   printf("duplicate number in array %d",ct);


    return 0;
}
