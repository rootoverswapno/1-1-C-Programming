  #include<stdio.h>
int main()
{
int n,i,j,r=0;
printf("Enter a number");
scanf("%d",&n);
for(i=n;i!=0;i=i/10)
{
    j=i%10;
    r=r*10+j;


}
    printf("reverse number is %d",r);
    return 0;
}
