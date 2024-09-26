#include<stdio.h>
int main()
{
 int a[10][10],i,j,r,c;
 printf("Enter number of Row:")   ;
 scanf("%d",&r);
 printf("Enter number of coloum:");
 scanf("%d",&c);
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("Enter data in[%d][%d]:",i,j);
         scanf("%d",&a[i][j]);
     }
 }
 printf("\n");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("%d",a[i][j]);
     }
     printf("\n");
 }



    getch();
    return 0;
}
