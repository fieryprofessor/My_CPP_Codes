//calculating factorial of a number
#include<iostream>
using namespace std;

int cal(int n){
    int f;
    if(n==1){
        return 1;
    }

    f= n * (cal(n-1));
   return f;
}

int main(){
int n;
cout<<"enter the number"<<"\n";
cin>>n;
cout<<"The factorial is:"<<"\n";
cout<<cal(n);
    return 0;
}