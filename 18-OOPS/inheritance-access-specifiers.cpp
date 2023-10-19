#include<iostream>
using namespace std;

class Parent{
public:
int x;      //x can be used anywhere

protected:
int y;      //y can be used in same class or derived class but not in main

private:    //z can be used only in this class where it is declared
int z;
};

class Child1 : public Parent{
//x will remain public
//y will remain protected 
//z will remain private and non accessible
};

class Child2 : protected Parent{
//x will be protected
//y will be protected 
//z will remain private and non accessible
};
class Child3 : private Parent{
//x will be private
//y will be private
//z will remain private and non accessible
};

int main()
{
Parent p;
p.x=1;
cout<<p.x;
    return 0;
}