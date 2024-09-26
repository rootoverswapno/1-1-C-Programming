#include<stdio.h>
int main()
{

    int i, j, num,a;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            a= 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    a = 0;
                    break;
                }
            }
            if(a==1)
            {
                printf("%d ",i);
            }
        }
    }
    getch();
    return 0;
}
