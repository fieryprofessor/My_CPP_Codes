// given a number n.find the sum of natural numbers till n but with alternate signs.
#include<iostream>
using namespace std;

int series(int n){

    if(n==0)
    return 0;
return series(n-1)+ ((n%2==0)?(-n):(n));

}

int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;
cout<<"the sum is:"<<endl;
cout<<series(n);
    return 0;
}