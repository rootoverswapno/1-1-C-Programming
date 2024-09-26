
#include<stdio.h>
int main()
{
 int a[]={1,2,3,4,5,6,7},sum=0,i;
 int a[],n;
 printf("Enter how many number :");
 scanf("%d",&n);
 int i,sum=0;
 for(i=0;i<n;i++)
 {
     printf("Array input%d:",i);
     scanf("%d",&a[i]);
     sum=sum+a[i];
 }
 printf("sum is :%d",sum);




    return 0;
}
