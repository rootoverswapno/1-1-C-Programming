
#include<stdio.h>
int func()
{
    static int n=1;
    n+=5;
    printf("%d",n);
}
int main()
{
 func();
 func();





}
