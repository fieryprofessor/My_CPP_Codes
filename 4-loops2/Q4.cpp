// Write a program to reverse a given integer number.
#include<iostream>
using namespace std;

int main()
{
    int n;int d=0;
    cin>>n;
    while(n!=0)
    {
        int r=n%10;
         d=(d*10)+r;
         n=n/10;
    }
    cout<<d<<endl;
    return 0;
}