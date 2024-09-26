#include<stdio.h>
int main()
{
  char s1[30],s2[30];
  gets(s1);
  strcpy(s2,s1);
  printf("source string = %s\n",s1);
  printf("Target string = %s\n",s2);


    getch();
    return 0;
}
