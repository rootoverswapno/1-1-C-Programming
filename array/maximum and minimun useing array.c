#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("how many number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    printf("Enter number%d:",i+1);
    scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++)

    {
    if(max<a[i])
    {
        max=a[i];
    }
    }
printf("%d is maximum",max);


    return 0;
}
