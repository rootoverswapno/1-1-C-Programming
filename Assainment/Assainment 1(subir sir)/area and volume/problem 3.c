#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  float area;
  printf("Enter side of equilateral triangle:");
  scanf("%d",&a);
  b=sqrt(3);
area=(float)(b*a*a)/4;
  printf("area is %.2f",area);


    return 0;
}
