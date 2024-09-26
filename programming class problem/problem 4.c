#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%5==0)
    {
        printf(" Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");

    }
     if(number%11==0)
    {
        printf(" Number is divisible by 11\n");
    }
    else
    {
        printf("Number is not divisible by 11");

    }



    return 0;
}
