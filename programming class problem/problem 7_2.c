#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c",&c);
    if( (c>='a'&&c<='z')||(c>='A'&&c<='Z') )
    {
        printf("%c is alphabet",c);
    }
    else
    {
        printf("%c is not alphabet",c);
    }
    return 0;
}
