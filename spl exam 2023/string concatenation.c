#include<stdio.h>
int main()
{
  int i,j,n;
  char *a,*b,t,*temp;
  printf("Enter size of carecter:")   ;
  scanf("%d",&n);
  a=(char*)malloc(n*sizeof(char));
  b=(char*)malloc(n*sizeof(char));
  temp=(char*)malloc(n*sizeof(char));
  printf("Enter string 1:");
  scanf("%d",&t);
  gets(a);
  printf("Enter string 2:");
  gets(b);
  temp=a;
  a=b;
  b=temp;
  for(i=0;a[i]!='\0';i++)
  {

  }
  a[i++]=' ';
  for(j=0;b[j]!='\0';)
  {

      a[i]=b[j];
      i++;
      j++;
  }
  a[i]='\0';
  puts(a);





    return 0;
}
