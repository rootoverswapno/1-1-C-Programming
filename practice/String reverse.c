
#include<stdio.h>
int main()
{
  char s[30]  ;
  int i,j,p=0;
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
      p++;
  }
  printf("%d\n",p);
for(j=i-1;j>=0;j--)
{
    printf("%c",s[j]);
}



    return 0;
}
