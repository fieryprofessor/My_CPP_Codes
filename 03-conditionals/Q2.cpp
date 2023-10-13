// Program to print absolute value of a number entered by the user.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int x = abs(n);
    cout<<"The absolute value is = "<<x<<endl;
    return 0;
}