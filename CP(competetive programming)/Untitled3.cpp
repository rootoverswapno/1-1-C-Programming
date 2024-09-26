#include<iostream>
using namespace std;
int main ()
{
    int t,A,B,i,j,result;
    cin>>t;
    while(t--)
    {
        cin>>A;
        cin>>B;
        result=A+B;
        j=0;
        for (i=1; i<=result; i++)
        {

            if((result%i)==0)
            {
                j++;
            }
        }


        if (j==2)
        {
           cout<<"Alice"<<endl;
        }

        else
        {
            cout<<"Bob"<<endl;
        }

    }

    return 0;
}

