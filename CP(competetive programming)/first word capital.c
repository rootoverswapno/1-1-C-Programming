#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    if(str[0]>=97&&str[0]<=122)
    {
        str[0]-=32;
    }
    puts(str);

}
