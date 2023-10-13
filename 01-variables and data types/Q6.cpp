//Program to swap the value of two numbers using three variables.
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    cout <<"Before swap "<< endl;
    cout <<"First number = "<< a << endl;
    cout <<"Second number = "<< b << endl;
    int c=b;
        b=a;
        a=c;
     cout <<"After swap " << endl;
    cout <<"First number = "<< a << endl;
    cout <<"Second number = "<< b << endl;  
    return 0;  
}