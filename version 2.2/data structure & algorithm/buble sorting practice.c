#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\n");
}
void bublesort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            int k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
            }
        }
    }
}
int main()
{
    int a[50],n;
    printf("Enter number do you use:");
    scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

   printarray(a,n);
   bublesort(a,n);
   printarray(a,n);


return 0;

}
