#include<stdio.h>
int main()
{

int v[5];
printf("Enter 5 integer:");
for(int i=0;i<5;i++)
{
    printf("Elements-%d=",i);
    scanf("%d",&v[i]);
}
printf("\ndisplay integer value:");
for(int i=0;i<5;i++)
{
    printf("\n%d",v[i]);
    printf("\n");

}





    return 0;
}
