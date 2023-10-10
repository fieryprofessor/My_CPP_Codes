// given a number num and a value k. print the multiples of num.
#include<iostream>
using namespace std;

void multiplecal(int num , int k){
    if(k==0)
    return;

    multiplecal(num, k-1);
    cout<<(num*k)<<" ";
}

int main(){
int num ,k;
cout<<"Enter num and k"<<endl;
cin>>num>>k;
cout<<"The multiples are:"<<endl;
multiplecal(num,k);
    return 0;
}