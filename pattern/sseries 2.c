#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Entter the last number") ;
    scanf("%d",&n);
    printf("1+2+3+.....+%d\n",n);
    while(i<=n)
    {
       sum=sum+i;
       i++;
    }
    printf("sumation of the series is %d",sum);



    return 0;
}
