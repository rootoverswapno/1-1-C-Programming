#include<stdio.h>
int main()
{
    while(1)
    {


    int i,j,row;
    printf("Enter number of rows:");
    scanf("%d",&row);
   for(i=1;i<=row;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf("*");

       }
       printf("\n");
   }

    }

    return 0;
}
