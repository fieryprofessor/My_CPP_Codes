#include<iostream>
using namespace std;
int main(){
int x=20;
int *ptr = &x;
cout<<"size of x is:"<<sizeof (x)<<endl;
cout<<ptr<<" "<<ptr+1<<" "<<ptr-1<<endl;
    return 0;
}