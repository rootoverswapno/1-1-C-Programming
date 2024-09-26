#include<stdio.h>
int main()
{
   int month;
   printf("Enter month number : ");
   scanf("%d",&month);
   if(month<0||month>12)
    printf("Enter a valid month number : ");
   scanf("%d",&month);

   if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("there are 31 days in a month ");
    }
    else
    {
        if(month==2)
        {
            printf("there are 28/29days in a month ");
        }
        else
        {
            printf("there are 30 days in a month");

        }
    }




    return 0;
}
