#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }



    getch();
    return 0;
}
