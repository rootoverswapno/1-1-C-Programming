#include<stdio.h>
int main()
{
  char Str1[100], Str2[100];
  	int result, i;

  	printf(" First String :  ");
  	gets(Str1);

  	printf("\nSecond String :  ");
  	gets(Str2);

  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
  	{

  	if(Str1[i] < Str2[i])
   	{
   		printf("\n str1 < str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str2 < str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}

  	}

    return 0;
}
