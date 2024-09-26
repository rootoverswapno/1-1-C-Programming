#include<stdio.h>
int main()
{

/*int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);
printf("\n%d", *pc);*/

/*int *p,p1;
int c=5;
p=&c;
c=1;
printf("%d",c);
printf("\n%d",*p);*/
/*int *pc,c;
c=5;
pc=&c;
*pc=1;
printf("%d",c);
printf("\n%d",*pc);*/
int *pc,c,d;
c=5;
d=-15;
pc=&c;
printf("%d",*pc);
pc=&d;
printf("\n%d",*pc);


    getch();
    return 0;
}
