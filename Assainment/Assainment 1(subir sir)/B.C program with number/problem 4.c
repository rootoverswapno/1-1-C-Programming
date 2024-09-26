 #include<stdio.h>
 int main()
 {
     int n1,n2,i;
     printf("Enter number 1:");
     scanf("%d",&n1);
     printf("Enter number 2:");
     scanf("%d",&n2);
     for(i=1;i<=n2;i++)
     {
         n1=n1+1;
     }
     printf("addition is %d",n1);


     return 0;
 }
