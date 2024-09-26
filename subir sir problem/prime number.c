#include<stdio.h>
int main()
{
    int n,i,p=0;
    printf("Enter number:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           p++;
        }

    }
    if(p==0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }



    return 0;
}
