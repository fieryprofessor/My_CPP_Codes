#include<iostream>
using namespace std;
void circle(int radius){
    double area=3.14*radius*radius;
    double circumference=2*3.14*radius;
    cout<<"Area :"<<area<<endl;
    cout<<"Circumference:"<<circumference<<endl;
}
int main(){
    int r;
    cout<<"Enter the radius"<<endl;
    cin>>r;
    circle(r);
    return 0;
}