#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        printf("%d\n\n",i);
        if(i==5)
        break;
    }

    printf("come outside of loop i=%d\n",i);


    return 0;

}
