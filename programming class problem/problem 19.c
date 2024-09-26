
#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter physics marks : ");
scanf("%d",&a);
printf("Enter chemistry marks : ");
scanf("%d",&b);
printf("Enter biology marks : ");
scanf("%d",&c);
printf("Enter mathematics marks : ");
scanf("%d",&d);
printf("Enter computer marks : ");
scanf("%d",&e);
if(a>=90)
{
    printf("physics have Grade (A)\n\n");
}
 else if(a>=80)
  {
       printf("physics have Grade (B)\n\n");
  }
else if(a>=70)
  {
       printf("physics have Grade (C)\n\n");
  }
else if(a>=60)
{
     printf("physics have Grade (D)\n\n");
}
else if(a>=40)
{
     printf("physics have Grade (E)\n\n");
}
else if(a<40)
{
     printf("physics have Grade (F)\n\n");
}

if(b>=90)
{
    printf("chemistry have Grade (A)\n\n");
}
 else if(b>=80)
  {
       printf("chemistry have Grade (B)\n\n");
  }
else if(b>=70)
  {
       printf("chemistry have Grade (C)\n\n");
  }
else if(b>=60)
{
     printf("chemistry have Grade (D)\n\n");
}
else if(b>=40)
{
     printf("chemistry have Grade (E)\n\n");
}
else if(b<40)
{
     printf("chemistry have Grade (F)\n\n");
}

    return 0;
}
