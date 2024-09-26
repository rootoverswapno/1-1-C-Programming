#include<stdio.h>
int main()
{
    char s[30];
    int i;
gets(s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]>=65&&s[i]<=90)
    {
        s[i]=s[i]+ 32;
    }

}
printf("UPPER case:%s",s);


    return 0;
}
