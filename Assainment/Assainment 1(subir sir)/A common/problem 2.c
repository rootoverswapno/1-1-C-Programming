 #include<stdio.h>
int main()
{
int n,i,j,r,a,p,count=0,sum=0,m;
printf("Enter number:");
scanf("%d",&n);
p=m=n;
for(i=1;n!=0;i++)
{
n=n/10;
count++;
}
for(i=1;p!=0;i++)
{
r=p%10;
p=p/10;
a=1;
for(j=1;j<=count;j++)
{
    a=a*r;
}
sum=sum+a;
}
printf("%d",sum);

if(sum==m)
{
    printf("\n%d number is Armstrong",m);
}
else
{
   printf("\n %d number is not Armstrong",m);
}
return 0;
}
