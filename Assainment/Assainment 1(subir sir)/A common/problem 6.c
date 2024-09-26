  #include<stdio.h>
int main()
{
    int n,i,j,r=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        j=i%10;
        r=r*10+j;

    }
if(n==r)
{
    printf("%d number is palindrome",n);
}
else
{
    printf("%d number is not palindrom",n);
}



    return 0;
}
