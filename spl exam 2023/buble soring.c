#include<stdio.h>
void inputarray(int *p,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",p+i);
    }
}
void printarray(int *p,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n%d",*(p+i));
    }
}

void bublesort(int *p,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(p[j]>p[j+1])
            {
                int k=p[j];
                p[j]=p[j+1];
                p[j+1]=k;
            }
        }
    }

}
int main()
{
    int *p,i,j,n;
    printf("Enter number of array do you want:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));

    inputarray(p,n);
    printarray(p,n);
    bublesort(p,n);
    printf("\n\nSorting is:");
    printarray(p,n);


    return 0;
}
