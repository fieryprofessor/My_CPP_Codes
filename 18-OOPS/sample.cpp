#include<iostream>
using namespace std;

class Fruit{   //creating a class Fruit
    public:
string name;
string color;
};

int main(){
Fruit apple;   // creating  apple object normal way
apple.name="Apple";  //accessing class data type through dot(.) operator
apple.color="Red";
cout<<apple.name<<" - "<<apple.color<<endl;

Fruit *mango = new Fruit();  //creating a pointer that is pointing towards our mango object
mango->name = "Mango";       //accessing class data type through arrow(->) operator
mango->color = "Yellow";
cout<<mango->name<<" - "<<mango->color<<endl;
    return 0;
}