#include<stdio.h>
int main()
{
  int a[10] ,i;
  printf("read and print elements of array:");
  printf("\n\ninput 10 elements of array");
  for(i=1;i<=10;i++)
  {
      printf("elements %d=",i);
      scanf("%d",&a[i]);

  }
  printf("\n Elements in array are:");
  for(i=1;i<=10;i++)
  {
      printf("%d\n",a[i]);


  }




    return 0;
}
