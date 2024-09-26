    #include<stdio.h>
 int main()
 {
   int a,b,c;
   printf("Enter three angle of a triangle");
   scanf("%d%d%d",&a,&b,&c);
   if(a+b+c==180&&c>0&&b>0&&a>0)

    {
        printf("triangle is valid");
    }
     else
     {
          printf("triangle is not valid");
     }

     return 0;
 }
