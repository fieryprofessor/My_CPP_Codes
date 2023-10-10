//to find the nth fibonacci number
#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0||n==1)
    return n;

    int s = fibo(n-1) + fibo(n-2);
    return s;
}

int main(){
   int n;
   cout<<"enter the nth term to find"<<"\n";
   cin>>n;
   cout<<"the term is:"<<"\n";
cout<<fibo(n);
    return 0;
}