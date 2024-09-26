#include<stdio.h>
void printarray(int *a ,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

}
void insertionarray(int *a,int n)
{

    for(int i=0;i<=n-1;i++)
    {
       int k=a[i];
       int j=i-1;
       while(j>=0&&a[j]>k)

       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=k;
    }
}
int main()
{

  int a[30],i;
  int n;
  printf("Enter number do you want:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printarray(a,n);
  insertionarray(a,n);
  printf("\n");
  printarray(a,n);

    return 0;
}
