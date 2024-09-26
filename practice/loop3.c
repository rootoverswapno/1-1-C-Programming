
#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=10;j++)
      {
          k=i*j;
        printf("%dx%d=%d",i,j,k);
        printf("\n");

      }
      printf("\n");
    }



    return 0;
}
