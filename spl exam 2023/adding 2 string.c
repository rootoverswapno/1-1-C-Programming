
#include<stdio.h>
int main()
{
    int n,t,i,j;
    char *p,*s;
    printf("Enter number:");
    scanf("%d",&n);
    scanf("%d",&t);
    p=(char*)malloc(n*sizeof(char));
    s=(char*)malloc(n*sizeof(char));
    gets(p);
    gets(s);
    int a=p;
    p=s;
    s=a;
    for(i=0; p[i]!='\0'; i++)
    {
        //p[i]=p[i];
    }
    p[i++]=' ';
    for(j=0; s[j]!='\0'; j++)
    {
        p[i]=s[j];
        i++;

    }
    p[i]='\0';
    puts(p);



    return 0;
}
