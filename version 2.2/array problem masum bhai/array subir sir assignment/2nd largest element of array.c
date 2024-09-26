#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n,i,max1,max2;
    printf("How many array element do you want:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Array index %d :",i);
        scanf("%d",&p[i]);
    }
    max1=max2=0;
    for(i=0;i<n;i++)
    {
         if(p[i]>max1)
         {
             max2=max1;
             max1=p[i];
         }
         else if(p[i]>max2&&p[i]<max1);
         {
             max2=p[i];
         }
    }
    printf("max 2 is :%d",max2);
    printf("\nmax 1 is :%d",max1);




    return 0;
}
