#include<stdio.h>
int main()
{
  int l,w,i,j;
  printf("Enter width and lenght value:");
  scanf("%d%d",&l,&w);
  for(i=1;i<=l;i++)
  {
   printf("%d\n",i);
  }
  for(j=2;j<w;j++)
  {
       printf("%d",j);
  }

  for(i=2;i<=l-1;i++)
  {
       printf(" ");
  }


    getch();
    return 0;
}
