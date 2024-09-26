#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[50];
    printf("enter string 1:");
    gets(s1);
     printf("enter string 2:");
    gets(s2);
    strcat(s1,s2);
    printf("concated string is :%s",s1);




    return 0;
}
