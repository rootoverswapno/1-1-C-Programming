#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
     scanf("%d",&ptr[i]) ;
  }
  printf(" Input array is:");
  for(i=0;i<n;i++)
  {
     printf("%d\t",ptr[i]);
  }
  int max;
  max=ptr[0];
for(i=0;i<n;i++)
{
    if(ptr[i]>ptr[0])
    {
        max=ptr[i];
    }
}
 int min;
  min=ptr[0];
for(i=0;i<n;i++)
{
    if(ptr[i]<ptr[0])
    {
        min=ptr[i];
    }
}

printf("\nthe max is : %d",max);
printf("\nthe min is : %d",min);



    return 0;
}
