// given two numbers p and q , find the value of p^q.
#include<iostream>
using namespace std;

int power(int p, int q){
    if(q==0)
    return 1;

    int x= p * power(p,(q-1));
    return x;
}

int main(){
int p,q;
cout<<"Enter the numbers"<<"\n";
cin>>p>>q;
cout<<"p to the power q is :"<<"\n";
cout<<power(p,q);
    return 0;
}