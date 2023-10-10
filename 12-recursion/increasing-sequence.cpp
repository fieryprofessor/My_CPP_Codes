//given a number n. find the increasing from 1 to n without using any loops.
#include<iostream>
using namespace std;

void sequence(int n){

    if(n==0)
    return;
    sequence(n-1);
    cout<<n<<" ";

}

int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;

cout<<"the sequence is:"<<endl;
sequence(n);
    return 0;
}