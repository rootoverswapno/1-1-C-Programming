#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,p=0;
    char t;
    char *a,*b;
    printf("Enter character do you want:");
    scanf("%d",&n);
    a=(char*)malloc(n*sizeof(char));
    b=(char*)malloc(n*sizeof(char));
    printf("Enter string:");
    scanf("%c",&t);
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        i++;
        p++;
    }
//printf("%d",i);
    for(j=0; p-1>=0; --p)

    {
        // printf("%c",a[--i]) ;
        // printf("%c",a[j]) ;
        b[j++]=a[--i];yd
    }
    b[j]='\0';
    puts(b);




    return 0;
}
