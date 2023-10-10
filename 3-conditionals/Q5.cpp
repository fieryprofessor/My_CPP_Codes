/* Create a calculator using switch 
statement to perform addition, subtraction, multiplication and division. */
#include<iostream>
using namespace std;

int main()
{
    int n1,n2; char p;int sum,diff,mul;float div;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;
    cout<<"Enter your operation"<<endl;
    cin>>p;

    switch(p)
    {
        case ('+'):
         sum=n1+n2;
        cout<<"The sum of the numbers is = "<<sum<<endl;
        break;

        case ('-'):
         diff=n1-n2;
        cout<<"The difference of the numbers is = "<<diff<<endl;
        break;

        case ('*'):
         mul=n1*n2;
        cout<<"The product of the numbers is = "<<mul<<endl;
        break;

        case ('/'):
         div=(float)n1/(float)n2;
        cout<<"The quotient of the numbers is = "<<div<<endl;
        break;

        default:
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}