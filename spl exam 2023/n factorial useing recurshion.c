#include<stdio.h>
int b,p,fact,result;
int power(int b)
{
    if(b!=0)
    {
        return b*power(b-1);
    }
    else return 1;
    //{
       // return 1;
   // }



}



int main()
{
  printf("Enter base:");
  scanf("%d",&b);
  //printf("Enter power:");
  //scanf("%d",&p);
  result=power(b);
  printf("power is %d",result);




    return 0;
}
