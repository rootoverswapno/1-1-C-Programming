#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter number of rows:");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }




    return 0;
}
