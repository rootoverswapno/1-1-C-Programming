#include<stdio.h>
int main()
{
  int n,row,col;
  printf("Enter number:");
  scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       for(col=0;col<=n-row;col++)
       {
           printf("*");
       }
       for(col=1;col<=row;col++)
       {
           printf("%d",col);
       }
       printf("\n");
   }


    return 0;
}