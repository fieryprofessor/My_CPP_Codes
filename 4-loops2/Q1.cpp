// Write a program to calculate the factorial of a number.
#include<iostream>
using namespace std;

int main()
{
    int n;int f=1;
    cout<<"Enter the numeber"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"The factorial is= "<<f<<endl;
    return 0;
}