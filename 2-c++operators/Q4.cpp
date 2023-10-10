// Program to calculate the sum of the first and the second last digit of a 5 digit number. 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number" <<endl;
    cin>>n;
    int r=n%10;
    int fifth=r;
    n=n/10;
    r=n%10;
    int fourth=r;
    n=n/10;
     r=n%10;
    int third=r;
    n=n/10;
     r=n%10;
    int second=r;
    n=n/10;
     r=n%10;
    int first=r;
    int sum = first+fourth;
    cout<<"The sum is = "<<sum<<endl;
    return 0; 
}