#include<stdio.h>
int main()
{
  int   j,a,b;
  char s[30];
  gets(s);
  int i=0;
  while(s[i]!='\0')
  {
     i++;
  }
  for(j=i-1;j>=0;j--)
  {
      printf("\n%c",s[j]);
  }

    getch();
    return 0;
}
