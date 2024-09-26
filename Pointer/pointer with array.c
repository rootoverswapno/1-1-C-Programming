#include<stdio.h>
int main()
{
int x[4],i;
int *ptr;
for(i=0;i<4;i++)
{
    scanf("%d",&x[i]);
}
ptr=&x[0];
for(i=0;i<4;i++)
{
  printf("%d\n",*ptr);
  ptr++;
}
    getch();
    return 0;
}
