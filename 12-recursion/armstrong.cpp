//given a number n ,find whether it is armstrong or not.
#include<iostream>
#include<math.h>
using namespace std;

int arm(int n){
    if(n==0)
    return 0;

    return +pow((n%10),3) + arm(n/10);
}

int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;
int m=n;
int p = arm(n);
cout<<p<<endl;
if(p==m)
cout<<"Yes";
else
cout<<"No";
    return 0;
}