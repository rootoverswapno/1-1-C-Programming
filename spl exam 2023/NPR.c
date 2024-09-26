#include<stdio.h>
int fact(int a)
{
    if(a!=0)
    {
        return a*fact(a-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,r,npr;
    printf("Enter number n:")   ;
    scanf("%d",&n);
    printf("Enter number r:");
    scanf("%d",&r);
    if(n>r)
    {
        npr=(fact(n)/fact(n-r));
    }
    else
    {
        printf("this is not valid");
    }
    printf("\n\n NPR is :%d",npr);





    return 0;
}
