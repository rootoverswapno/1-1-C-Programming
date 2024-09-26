 #include<stdio.h>
int main()
{
int n,i,j,r=0,sum=0;
printf("Enter a number");
scanf("%d",&n);
for(i=n;i!=0;i=i/10)
{
    j=i%10;
    sum=sum+j;
}
printf(" sum of digit is %d",sum);
    return 0;
}

