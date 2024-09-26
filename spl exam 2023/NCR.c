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
    int n,r,ncr;
    printf("Enter number n:")   ;
    scanf("%d",&n);
    printf("Enter number r:");
    scanf("%d",&r);
    if(n>r)
    {
        ncr=(fact(n)/(fact(r)*fact(n-r)));
    }
    else
    {
        printf("this is not valid");
    }

    printf("\n\nncr is %d",ncr);






    return 0;
}
