#include<iostream>
using namespace std;
int main()
{
    int n;int c=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        int d=n%10;
        c++;
        n=n/10;
    }
    cout<<"The number of digits is ="<<c<<endl;
    return 0;
}