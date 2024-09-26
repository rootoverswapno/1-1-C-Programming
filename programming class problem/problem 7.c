#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int lowercase_vowel,uppercase_vowel;
    printf("Enter an alphabet :");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a Vowel",ch);

    }
    else
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z'))
        {
            printf("%c is a Consonant",ch);
        }
        else
        {
            printf("%c is not a alphabet",ch);
        }
    }




    return 0;
}
