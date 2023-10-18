#include<iostream>
using namespace std;

class ABC {
    int x;     // we cannot access x
    public: 

    void set(int n){    // but we can access functions set and get
        x=n;
    }

    int get(){
        return x;
    }
};
int main(){
ABC obj1;
obj1.set(3);
cout<<obj1.get();
    return 0;
}