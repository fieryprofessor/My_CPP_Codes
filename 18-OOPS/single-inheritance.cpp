#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Child : public Parent{
    public:
Child(){
    cout<<"Child class"<<endl;
}
};

int main()
{
    Child p;  //since child class is inheriting the properties of parent class once Parent constructor is called then Child constructor is called

    return 0;
}