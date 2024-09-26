#include<stdio.h>
int main()
{
  int a[30],b[30],i;
  int n;
  printf("Enter number do you want:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter element number %d:",i);
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
      b[i]=a[i];
  }
  for(i=0;i<n;i++)
  {
      printf("%d\n",a[i]);
  }
  printf("\ncopy array is:\n");
   for(i=0;i<n;i++)
  {
      printf("%d\n",b[i]);
  }




    return 0;
}
