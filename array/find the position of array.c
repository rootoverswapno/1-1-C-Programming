#include<stdio.h>
int main()
{
 int a[10],n,i,m,pos=-1;
  printf("Enter number of elements you wants:")  ;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("\nEnter value %d:",i);
      scanf("%d",&a[i]);
  }
  printf("\nEnter value you want to search:");
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
      if(a[i]==m)
      {
          pos=i;
          break;
      }
  }
  if(pos==-1)
  {
      printf("position is not found");
  }
  else
  {
   printf("\n Array index is : %d",pos);
  }




    getch();
    return 0;
}
