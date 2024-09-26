#include<stdio.h>
int main()
{
  char a[100],b[100],c[100],n,i;
   printf("Enter size:");
   scanf("%d",&n);
   printf("\nEnter elements a:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i])  ;
   }
   printf("\nEnter elements b: ");
   for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("a:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nb:");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    c[i]=a[i];
    a[i]=b[i];
    b[i]=c[i];
    }
     printf("\na:");
    for(i=0;i<n;i++)
    {
       printf("%d",a[i]);
    }
     printf("\nb:");
     for(i=0;i<n;i++)
    {
       printf("%d",b[i]);
    }







    return 0;
}
