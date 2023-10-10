//sum of digits of a number
#include<iostream>
using namespace std;

int sumdigits(int n){

if(n==0)
return 0;

    int s= n%10 + sumdigits(n/10);
    return s;
}

int main(){
int n;
cout<<"enter the number"<<"\n";
cin>>n;
cout<<"the sum of the digits is:"<<"\n";
cout<<sumdigits(n)<<"\n";
    return 0;
}