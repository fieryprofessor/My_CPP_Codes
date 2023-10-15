#include<iostream>
using namespace std;
int main()
{
    int n;int d=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        d=d*i;
    }
    cout<<"The factorial is = "<<d<<endl;
    return 0;
}