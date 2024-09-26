#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *p;
 int n,i,j,count=0;
 printf("enter array element number do you want:")   ;
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
 {
      printf("Element no %d:",i);
     scanf("%d",&p[i]);
 }
    for(i=0;i<n;i++)
    {
        printf("%d",p[i]);
        count++;
    }
    printf("\nArray size is : %d\n",count);
    for(j=i;j>0;j--)
    {
        printf("%d",j);
    }

    return 0;
}
