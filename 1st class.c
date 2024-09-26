#include <stdio.h>
int main(void){
float a,b,c,d,e,sum,avg;
printf("Enter the input for a,b,c,d,e\n");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
sum=(a+b+c+d+e);
printf("Enter the sum is:%.2f\n",sum);
avg=(sum/5);
printf("Enter the avg is:%.2f",avg);
    return 0;
}
