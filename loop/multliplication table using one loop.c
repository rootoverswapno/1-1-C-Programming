
#include<stdio.h>
int main()
{
  int n,j=1,i;
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
       printf("%dx%d=%d\n",j,i,j*i);
       if(i==10)
       {
           j++;
           i=0;
           printf("\n");
       }
       if(j>n)
       {
         break;
       }

   }



    return 0;
}
