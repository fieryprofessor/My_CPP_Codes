// given two numbers x and y.find the gcd of the two numbers.
#include<iostream>
using namespace std;

int gcd(int x,int y){
if(x==0)
return y;

return(y%x,x);
}

int main(){
int x,y;
cout<<"Enter two numbers"<<endl;
cin>>x>>y;
cout<<"gcd is:"<<" ";
if(y>=x)
cout<<gcd(x,y);
else
cout<<gcd(y,x);
    return 0;
}