#include<iostream>
using namespace std;
int square(int num){
    return(num*num);
}
int main(){
    for(int i=1;i<=5;i++)
    {
       cout<<square(i)<<" ";
    }
    return 0;
}