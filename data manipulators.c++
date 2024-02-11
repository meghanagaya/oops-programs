#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //using endl
    cout<<"My name is Meghana"<<endl;
    //
    //using ends
    cout<<"Hi"<<ends;
    cout<<endl;
    //terminates by inserting null operator
    //using ws
    string name;
    getline(cin>>ws,name);
    cout<<name<<endl;
    //removes whitespaces if they are present
    //setw
    cout<<setw(6)<<"Hi\n";
    //creates spaces provides in setw(n)
    //setfill
    cout<<setfill('^')<<setw(12)<<"Hi divya\n";
    //fills the space given by setw
    //setprecision
    double num=0.43358697456;
    cout<<setprecision(4)<<num<<endl;
    //setprecision decides the values after the decimal points
    //flush
    int a=10;
    cout.flush();
    cout<<"The value of a is "<<a;
    return 0;
}