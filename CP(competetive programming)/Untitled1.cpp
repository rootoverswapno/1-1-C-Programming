#include<iostream>
using namespace std;
 int count1=0,count2=0;
class test
{
public:
    test()
    {
        count1++;
        cout<<"constructer Executed:"<<count1<<endl;

    }
    ~test()
    {
        count2++;
        cout<<"Destructor Executed:"<<count2<<endl;
    }
};
int main()
{
 test t,t1,t2,t3;

return 0;

}
