#include<stdio.h>
int main()
{
  int x=10,y=20,z;
  int *p1,*p2;
  p1=&x;
  p2=&y;
   int var = 5;


  z=*p1;
 *p1=*p2;
 *p2=z;
 printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("address of var: %p", &var);

    getch();
    return 0;
}
