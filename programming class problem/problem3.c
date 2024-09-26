#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if(number>0)
    {
      printf("number is positive");
    }

    if(number<0)
    {
        printf("number is negative");
    }
    if(number==0)
    {
        printf("number is ZERO");
    }





    return 0;
}

