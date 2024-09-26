#include<stdio.h>
int main()
{
 int n,t,i,j=0;
 char *p;
 printf("Enter number:");
 scanf("%d",&n);
 scanf("%d",&t);
 p=(char*)malloc(n*sizeof(char));
 gets(p);
 for(i=0;p[i]!='\0';i++)
 {
     if(!(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'))
     {
         p[j]=p[i];
         j++;
     }
 }
 p[j]='\0';
 puts(p);




    return 0;
}
