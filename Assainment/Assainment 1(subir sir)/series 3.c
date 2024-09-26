 #include<stdio.h>
int main()
{
    int n,i,j=3,sum=0;
    printf("Enter series number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i*i);
        if(i<n)
        {
            printf("%d^%d+",i,j);

        }
        else
        {
            printf("%d^%d",i,j);
        }
    }
    printf("\nsummetion is the series is:%d",sum);



    return 0;
}

