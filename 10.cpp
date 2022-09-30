#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 numbers";
    for(i=0;i<=9;i++)
        cin>>a[i];
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    cout<<"sum is "<<sum;
    return 0;
}
