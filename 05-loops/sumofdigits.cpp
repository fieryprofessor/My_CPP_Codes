#include<iostream>
using namespace std;
int main()
{
    int n;int s=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        int d=n%10;
        s=s+d;
        n=n/10;
    }
    cout<<"The sum of digits is = "<<s<<endl;
    return 0;
}