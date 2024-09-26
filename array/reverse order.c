#include<stdio.h>
int main()
{
 int a[10],i,j;
 for(i=0;i<10;i++)
 {
     printf("Elements %d=",i);
     scanf("%d",&a[i]);
 }
 printf("\nArray in reverse order:");
 for(j=i-1;j>=0;j--)
 {
   printf("\n%d",a[j]);
 }

int max=a[0];
for(i=0;i<10;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }


}
printf("max is %d",a[i]);
return 0;
}
