#include<stdio.h>
int main()
{
 char s[30];
int i,count=0,j;
 gets(s);
 for(i=0;s[i]!='\0';i++)
 {
    count++;
 }
 //for(j=count-1;j>=0;j --)
 {
   printf("%c",s[j]);
 }
getch();
return 0;
}
