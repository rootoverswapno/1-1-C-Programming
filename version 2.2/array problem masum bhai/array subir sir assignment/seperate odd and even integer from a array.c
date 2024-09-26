#include<stdio.h>
int main()
{
 int *p;
 int n,i,j=0,k=0;
 int a[10],b[10];
 printf("How many array do you want:");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
 {
     printf("Element no %d:",i);
     scanf("%d",&p[i]);
 }
  for(i=0;i<n;i++)
  {
      if(p[i]%2==0)
      {
          a[j]=p[i];
          j++;
      }
      else
      {
          b[k]=p[i];
          k++;
      }

  }
  printf("Even number:");
  for(i=0;i<j;i++)
  {
      printf("%d",a[i]);
  }


  printf("\nodd number:");
  for(i=0;i<k;i++)
  {
      printf("%d",b[i]);
  }



    return 0;
}
