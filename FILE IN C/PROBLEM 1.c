#include<stdio.h>
int main()
{
 int i;
 FILE *f;
 f=fopen("E:\\dd\\swapno.txt","w");
 if(f==NULL)
 {

     printf("error");
 }
 for(i=0;i<101;i++){
    fprintf(f,"%d\n",i);
    printf("%d\n",i);
 }
 fclose(f);

    return 0;
}
