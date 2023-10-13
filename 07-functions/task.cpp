//to print all odd numbers between a and b.
#include <iostream>
using namespace std;

void printodd(int x,int y){
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        continue;
        else
        cout<<i<<" ";
    }
}

int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    printodd(a,b);
    return 0;
}