#include<stdio.h>
int main()
{
char c;
printf("Enter a letter:");
scanf("%c",&c);
if(c>='a'&&c<='z')
{
    printf("%c is lowercase alphabet",c);
}
    else
    {
        printf("%c is Uppercase alphabet",c);
    }
    return 0;
}
