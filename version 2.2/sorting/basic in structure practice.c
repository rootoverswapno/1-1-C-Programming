#include<stdio.h>
#include<string.h>
 typedef struct person{
char n[50];
int cit;
float salary;
}person;
int main()
{
    person a;

    strcpy(a.n,"swapnomoy biswas");
    a.cit=2003;
    a.salary=12000;
    printf("Name:%s\n",a.n);
    printf("\ncitizenship:%d",a.cit);
    printf("\nsalary:%.2f",a.salary);

    return 0;
}
