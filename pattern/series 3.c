#include<stdio.h>
int main()
{

   int i=1,j=2,n1,n2,sum=0;
   printf("Enter  series number :");
   scanf("%d%d",&n1,&n2);
   while(i<=n1,j<=n2)
   {
    sum=sum+i*j;
    if(i<n1&&j<n2)
    {
        printf("%d*%d+",i,j);
    }
    else
    {
        printf("%d*%d=\n",i,j);
    }
    i++;
    j++;
   }
printf("sumation is %d\n",sum);

    return 0;
}
