#include<iostream>
using namespace std;

class Stacks{
int capacity;
int *arr;
int top;
public:
Stacks(int size){
   capacity=size;
   arr=new int[size];
   top=-1;
}

void push(int data){
    if(top==capacity-1){
        cout<<"Overflow"<<endl;
        return;
    }
    top++;
    arr[top]=data;
}

void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return;
    }
    top--;
}

int Gettop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    return arr[top];
}

bool isEmpty(){
    return(top==-1);
}

bool isFull(){
    return (top==capacity-1);
}

int size(){
    return (top+1);
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}

};

int main(){
Stacks st(5);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.display();
cout<<st.isEmpty()<<endl;
cout<<st.size()<<endl;
st.pop();
st.pop();
st.display();
    return 0;
}