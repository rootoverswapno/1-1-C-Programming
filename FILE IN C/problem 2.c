#include<stdio.h>
int main()
{
  char s[1000];
  FILE *f,*a;
  f=fopen("E:\\dd\\bc.txt","r");
  a=fopen("E:\\dd\\bincod swapno.txt","w");
  if(f==0 || a==0)
  {
       printf("file not open");
  }
  //printf("Enter a sentence:");
  fgets(s,100,f);
  fputs(s,a);
  fclose(f);







    return 0;
}
