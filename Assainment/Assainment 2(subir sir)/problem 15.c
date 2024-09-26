#include<stdio.h>
int main()
{
char s[100];
gets(s);
int i;
for(i=0;s[i]!='\0';i++)
{
  printf("%d\n",s[i]);
}
    return 0;
}
