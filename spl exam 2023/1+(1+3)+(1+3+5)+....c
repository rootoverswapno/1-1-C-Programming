#include<stdio.h>
int main()
{
    int *p,a,i,j,b,sum=0;
    scanf("%d",&a)   ;
    p=a;
    for(i=1; i<=p; i++)
    {
        if(i>1)
        {
            printf("+(");
        }
        b=1;
        for(j=1; j<=i; j++)
        {
            if(i==1)
            {
                printf("1");
            }
            else if(i>j)
            {
                printf("%d+",b);
            }
            else if(i!=1&&i==j)
            {
                printf("%d)",b);
            }
            b=b+2;
            sum=sum+b;
        }

    }
    printf("\n\nsum is :%d",sum);



    return 0;
}
