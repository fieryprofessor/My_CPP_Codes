#include<iostream>
using namespace std;

class Rectangle{
public:
int l;
int b;

Rectangle(){  //default constructor
    l=0;
    b=0;
}

Rectangle(int x,int y){  // parameterised constructor
    l=x;
    b=y;
}

Rectangle(Rectangle &r){   // copy constructor
    l=r.l;
    b=r.b;
}
~Rectangle(){  //destructor
    cout<<"This is a destructor"<<endl; // it is called automatically after the end of function main to delete all objects
}
};

int main(){
Rectangle r1;
cout<<r1.l<<" "<<r1.b<<endl;

Rectangle r2(3,4);
cout<<r2.l<<" "<<r2.b<<endl;

Rectangle *r3= new Rectangle();
r3->l=4;
r3->b=6;
cout<<r3->l<<" "<<r3->b<<endl;
delete r3; // delete calls the destructor manually but it can only be used if a pointer is pointing to an object

Rectangle r4 =r2;
cout<<r4.l<<" "<<r4.b<<endl;

    return 0;
}