#include<iostream>
using namespace std;

class Parent1{
    public:
    Parent1(){
        cout<<"Parent1 class"<<endl;
    }
};

class Parent2{
    public:
    Parent2(){
        cout<<"Parent2 class"<<endl;
    }
};

class Child : public Parent1, public Parent2{
    public:
Child(){
    cout<<"Child class"<<endl;
}
};

int main()
{
    Child p; //since child is inheriting from both parent 1 and parent 2
             // first parent1 is called and then parent2 is called and then finally child is called
    return 0;
}