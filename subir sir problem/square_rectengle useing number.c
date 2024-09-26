#include<stdio.h>
int main()
{
  int w,l,i,j,k,m;
  printf("Enter lenght &weidth :");
  scanf("%d%d",&l,&w);
  for(i=1;i<=l;i++)
  {
    if(i>9)
    {
        printf("%d",i%9);
    }
    else
    {
        printf("%d",i);
    }
  }
  printf("\n");
  for(j=2;j<w;j++)
  {
      printf("%d",j);

      for(k=1;k<l-1;k++)
      {
          printf(" ");
      }
        printf("%d",j);

      printf("\n");

  }
  printf("%d",w);
  for(m=2;m<=l;m++)
  {
      if(m>9)
      {
          printf("%d",m%9);
      }
      else
      {
           printf("%d",m);
      }


  }



    return 0;
}
