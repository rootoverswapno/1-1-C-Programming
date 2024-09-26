#include<stdio.h>
void sum(int a,int b)
{
    int result;
    result=a+b;
}
void print(int a,int b)
{
    int result;
    printf(" %d",result);
}
int main()
{
 int   n1,n2;
 printf("Enter number:");
 scanf("%d%d",&n1,&n2);
sum(n1,n2);
print(n1,n2);

 return 0;
}

