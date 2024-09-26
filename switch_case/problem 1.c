#include<stdio.h>
int main()
{

    int day;
    printf("Enter a day number:");
    scanf("%d",&day);
    switch(day)
         {
         case 1:
            {
                printf("Monday");
                break;
            }
         case 2:
            {
                printf("Tuesday");
                break;
            }
         case 3:
            {
              printf("wednesday");
              break;
            }
         default:
            {
                printf("out of range");
                break;
            }


         }


    return 0;
}
