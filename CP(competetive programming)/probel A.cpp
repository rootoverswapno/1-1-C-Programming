#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100];
        int n,k,c=0;
        cin>>n>>k;
        for(int i=0;i<100;++i)
        {
            cin>>a[i];
            if(a[i]==k){
               c++;
            }


        }
        if(c>0)
        {

            cout<<"YES";
        }
        else
        {

            cout<<"NO";
        }


        }

    return 0;
}
