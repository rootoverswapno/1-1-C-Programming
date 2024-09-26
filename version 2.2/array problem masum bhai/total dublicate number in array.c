#include<stdio.h>
int main()
{
   int a[30],i,j;
  int n,count=0;
  printf("Enter number do you want:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter element number %d:",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
       if( a[i]==a[j])
       {
          count++;
          break;
       }

   }
  }
  printf("duplicate number of array is %d",count);




    return 0;
}
