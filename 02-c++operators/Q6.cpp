//Design a calculator to perform basic arithmetic operations (+,-,/,*,%) 
#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout <<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;
    int add=n1+n2;
    int sub=n1-n2;
    int mul=n1*n2;
    float div=(float)n1/(float)n2;
    int remain = n1%n2;
    cout<<"The sum of numbers is = "<<add<<endl;
    cout<<"The difference of numbers is = "<<sub<<endl;
    cout<<"The product of numbers is = "<<mul<<endl;
    cout<<"The quotient of numbers is = "<<div<<endl;
    cout<<"The remainder of numbers is = "<<remain<<endl;
    return 0;
}
 