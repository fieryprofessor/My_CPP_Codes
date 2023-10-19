#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Child1 : public Parent{
    public:
Child1(){
    cout<<"Child1 class"<<endl;
}
};
class Child2 : public Parent{
    public:
Child2(){
    cout<<"Child2 class"<<endl;
}
};

int main()
{
    Child1 p;// child1 is inheriting from parent so first parent is called then child1 is called
    Child2 q;// child2 is inheriting from parent so first parent is called then child2 is called
    return 0;
}