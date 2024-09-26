#include<iostream>
using namespace std;
int main ()
{
    int T,A,B,i,result,j=0;
    cin>>T;
    for(i=1;i<=T;i++)
    {
    cin>>A;
    cin>>B;
    result=A+B;
 for (i=1;i<=result;i++)
   {
      if((result%i)==0)
      {
         j++;
      }
   }

   if (j==2)
      cout<<"Alice"<<endl;
   else
      cout<<"Bob"<<endl;
    }

    return 0;
}
