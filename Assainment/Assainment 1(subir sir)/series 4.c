#include<stdio.h>
int main()
{
 int n,a,d,sum,i,t;
 printf("Enter series first number:");
 scanf("%d",&a);
 printf("Enter total number of series:");
 scanf("%d",&n);
 printf("Enter common difference of series ");
 scanf("%d",&d);
      sum=(n*(2*a+(n-1)*d))/2;
      t=a+(n-1)*d;
 printf("sum of the ap series is:");

printf("%d",t);

    return 0;
}
/*#include<stdio.h>
int main() {
	int a,d,n,i,tn;
	int sum=0;
	printf("Enter the first number of the A.P. series: ");
	scanf("%d",&a);
	printf("Enter the total numbers in the A.P. series: ");
	scanf("%d",&n);
	printf("Enter the common difference of A.P. series: ");
	scanf("%d",&d);
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
	tn = a + (n-1) * d;
	printf("Sum of the series A.P.: ");
	for (i=a;i<=tn; i= i + d ) {
		if (i != tn)
		             printf("%d + ",i); else
		             printf("%d = %d ",i,sum);
	}
	return 0;
}*/
