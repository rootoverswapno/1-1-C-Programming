 #include<stdio.h>
 int main()
 {
     int n,i,sum=0;
     printf("Enter number:");
     scanf("%d",&n);
     for(i=1;i<=n;i=i+2)
     {
         sum=sum+i;
     }
     printf("sum is %d",sum);



     return 0;
 }
