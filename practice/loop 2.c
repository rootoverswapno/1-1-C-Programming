
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
       j=n*i;
        printf("%dx%d=%d",n,i,j);
        printf("\n");

    }



    return 0;
}
