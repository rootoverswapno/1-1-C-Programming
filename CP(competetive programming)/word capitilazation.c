#include<stdio.h>

int main()
{
    int i;

    char str[100];
    printf("Enter string:");
    scanf("%[^\n]s",str);
    if(str[0]>=97&&str[0]<=122)
    {
        str[0]=str[0]-32;
    }
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i-1]==32)
        {
            if(str[i]>=97&&str[i]<=122)
            {
                str[i]=str[i]-32;
            }
        }
    }
puts(str);

    return 0;
}
