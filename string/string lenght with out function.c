#include<stdio.h>
int main()
{
   char s[30];
   int i=0,count=0;
   gets(s);
   while(s[i]!='\0')
   {
       count++;
       i++;
   }
   printf("lenght is :%d",count);



    return 0;
}
