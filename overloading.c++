#include<iostream>
using namespace std;
class addition{
    public:
    int sum(int a, int b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main (void)
{
    addition obj;
    cout<<obj.sum(5,8)<<endl;
    cout<<obj.sum(8,5,7);
    return 0;
}
