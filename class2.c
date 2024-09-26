#include <stdio.h>
int main(){
float num1,num2,sum,diff,equ;
printf("enter the value of a and b\n");
scanf("%f%f",&num1,&num2);
sum =(num1+num2);
printf("enter the value of sum:%.2f\n",sum);
scanf("%%",&num1,&num2);
diff=(num1-num2);
printf("Enter the value of diff:%.2f\n",diff);
equ=(sum/diff);
printf("Enter the value of equ:%2f",equ);


return 0;

}
