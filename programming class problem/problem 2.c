#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b||b==c)
    {
        printf("all value are equal");
    }
    else
    {
        if(a>b)
        {
            if(b>c)
            {
                printf("a is maximum");
            }
            else
            {
             if(c>b)
             {
                 if(c>a)
                 {
                     printf("c is maximum");
                 }
                 else
                 {
                     printf("a is maximum");
                 }

             }
            }
        }
        else
        {
            if(b>c)
            {
                printf(" b is maximum");
            }
            else
            {
              printf("c is maximum");
            }
        }


    }
return 0;


}





