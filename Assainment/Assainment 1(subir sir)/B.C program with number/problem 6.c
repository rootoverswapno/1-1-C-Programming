  #include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter three number:")   ;
 scanf("%d%d%d",&a,&b,&c);
 if(a-b>0)
 {
     if(a-c>0)
     {
         printf("%d is maximum",a);
     }
     else
     {
         printf("%d is maximum ",c);
     }
 }
 else
 {
     if(b-c>0)
     {
         printf("%d is maximum",b);
     }
     else
     {
         if(c-a>0)
         {
             printf("%d is maximum",c);
         }

     }
 }



    return 0;
}
