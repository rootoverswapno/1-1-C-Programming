#include<stdio.h>
int main()
{
 int a[5],b[10],n,i,j;
 printf("Enter number of elements:")   ;
 scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        printf("Enter number %d:",i);
        scanf("%d",&a[i]);

    }


     for(j=i-1;j>=0;j--)
    {

      printf("%d",a[j]);
    }


    getch();
    return 0;
}
