#include<stdio.h>
static int sum=0,rem,n;

int revnumfunction(int n)
{
    if(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        revnumfunction(n/10);
    }
    else
        return sum;

}

int main()
{
    int n,revnum;
    printf("Enter number:")  ;
    scanf("%d",&n) ;
    revnum=revnumfunction(n);
    if(n==sum)
    {
        printf("\n\n%d number is palindrome",n);
    }
    else
    {
        printf("\n\n%d number is not palindrome",n);
    }
    printf("\n\nreverse number is:%d",revnum);
    return 0;
}
