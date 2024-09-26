#include<stdio.h>
int main()
{
 char s[50],c;
 int l=0,i,j=0,n;
 printf("Enter a string:");
 gets(s);
 for(i=0;s[i]!='\0';i++)
 {
     if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
     {
         s[j]=s[i];
         j++;
     }
 }
 s[j]='\0';

 printf("removeing charactrt:%s",s);
    return 0;
}
