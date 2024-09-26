#include<stdio.h>
int main()
{

int num[5];
int pos=0,i,n;
for(i=0;i<5;i++)
{
    printf("Enter value %d:",i);
    scanf("%d",&num[i]);
}
printf("\nEnter number:");
scanf("%d",&n);
for(i=0;num[i]!=n;i++)
{
    pos++;
}
printf("\nposition is:%d",pos);

getch();

    return 0;
}
