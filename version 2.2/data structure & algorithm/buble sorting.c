#include<stdio.h>
void printarray(int*a,int n)
{
    printf("\nEnter sort:");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\n");
}
void bubblesort(int *a,int n)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
           if(a[j]>a[j+1])
           {
             int temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
        }
    }
}

int main()
{
    int a[50],n;
    printf("Enter how many number you want:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
      printf("Enter number %d:",i);
      scanf("%d",&a[i]);
    }
 printarray(a,n);
 bubblesort(a,n);
 printarray(a,n);
}
