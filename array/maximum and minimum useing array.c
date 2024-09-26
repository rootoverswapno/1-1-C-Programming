#include<stdio.h>
int main()
{
   int a[100],n,i,sum=0,avg;
   printf("how mamy number:") ;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter number%d:",i+1);
       scanf("%d",&a[i]);

   }

   for(i=0;i<n;i++)
   {
     sum=sum+a[i] ;
     avg=sum/n;
   }
   printf("sumation is %d\n",sum);
   printf("average is %d\n",avg);

   int max=a[0];
   for(i=1;i<n;i++)
   {
       if(max<a[i])
       {
           max=a[i];
       }

   }
   printf("maximum is %d\n",max);
   int min=a[0];

    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimum is %d",min);

getch();
    return 0;
}
