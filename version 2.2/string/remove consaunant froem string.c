#include<stdio.h>
int main()
{
char s[50];
int i,j=0;
printf("Enter a string:");
gets(s);
for(i=0;s[i]!='\0';i++)
{
    if(!(s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='t'||s[i]=='u'||s[i]=='v'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'))
    {
        s[j]=s[i];
        j++;
    }
}
s[j]='\0';
printf("\n\ncut of string is %s",s);



getch();

   return 0;
}
