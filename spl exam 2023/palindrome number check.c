#include<stdio.h>
int main()
{
    int n,sum=0,m,a;
    printf("Enter number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        m=n%10;
        sum=sum*10+m;
        n=n/10;
    }

    if(a==sum)
    {
        printf("%d is palindrome",a);
    }
    else
        printf("%d is not palindrome",a);

    printf("\n\n%d",sum);




    return 0;
}
