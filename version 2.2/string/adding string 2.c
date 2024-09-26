#include<stdio.h>
int main()
{
 char s[30];
 int i,count=0;
 printf("Enter your name:");
 gets(s);
 for(i=0;s[i]!='\0';i++)
 {
    count ++;
 }
 printf("string lenght is:%d",count);

 return 0;
}
