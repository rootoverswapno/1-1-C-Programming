#include<stdio.h>

int main()
{
int days,years,weeks,day;
printf("Enter days number:");
scanf("%d",&days);
years=days/365;
weeks=(days%365)/7;
day=days-((365*years)+(7*weeks));
printf("Years=%d\n",years);
printf("Weeks=%d\n",weeks);
printf("Day=%d",day);
return 0;
}
