#include<stdio.h>
int main()
{
   int n,i,j,k;
   printf("Enter number of multiplication taable:");
   scanf("%d",&n);
   for(i=n;i<=n;i++)
   {
       for(j=1;j<=10;j++)
       {
           k=i*j;
           printf("%d x %d=%d",i,j,k);
           printf("\n");
       }
        printf("\n");
   }
    return 0;
}
