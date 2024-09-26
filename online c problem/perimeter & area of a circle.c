#include<stdio.h>
int main()
{
    int r,area,perimeter;
    printf("Enter inpur for circle radius:");
    scanf("%d",&r);

    area=3.1416*r*r;
    perimeter=2*3.1416*r;
    printf("area and perimeter is %d and %d",area,perimeter);


    return 0;
}
