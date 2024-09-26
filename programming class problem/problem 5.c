#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("number is Even");
    }
    else
    {
        printf("Number is ODD");
    }



    return 0;
}
