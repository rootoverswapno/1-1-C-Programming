#include<stdio.h>
int main()
{
 char s[30] ;
 int i,j,count=0;
 gets(s);
for(i=0;s[i]=='\0';i++)
{
    for(j=i+1;s[i]=='\0';j++)
    {
        if(s[i]==s[j])
        {
            count++;
            break;
        }
    }

}
printf("%d",count);


    return 0;
}
