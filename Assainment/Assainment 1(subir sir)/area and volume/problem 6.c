   #include<stdio.h>
int main()
{
  int a,b,h;
  float area;
  printf("Enter value for a:");
  scanf("%d",&a);
  printf("Enter value for b:");
  scanf("%d",&b);
  printf("Enter value for height;");
  scanf("%d",&h);
  area=(float)((a+b)/2)*h;
  printf("area is %f",area);



    return 0;
}
