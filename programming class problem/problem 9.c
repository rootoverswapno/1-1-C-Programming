#include<stdio.h>
#include<ctype.h>
int main()
{
char c;
printf("Enter any character : ");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
    printf("%c is alphabet",c);

}
else
{
    if(c>='0'&&c<='9')
    {
        printf("%c is Digit",c);

    }
    else
    {
        printf("%c is special charecter",c);
    }
}



return 0;
}
