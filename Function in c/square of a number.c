#include<stdio.h>
int square(int a);
int main()
{
   int num;
   printf("Enter number:") ;
   scanf("%d",&num);
   int result=square(num);
   printf("Square is :%d",result);
   getch();
   return 0;
}

int square(int a)
{



    return (a*a);
}
