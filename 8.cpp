#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl<<y;
    return 0;
}
