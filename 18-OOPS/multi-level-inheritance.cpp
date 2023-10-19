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

class Grandchild : public Child{
    public:
Grandchild(){
    cout<<"Grandchild class"<<endl;
}
};

int main()
{
    Grandchild p;//grandchild class inheriting from child and child in turn is inheriting from parent
                 // so first parent is called then child is called and then grandchild is called 

    return 0;
}