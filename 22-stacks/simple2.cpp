//stack implementation using linked list
#include<iostream>
using namespace std;

class Node{
public:
int val;
Node*next;
Node(int data){
    val=data;
    next=NULL;
}
};

class Stacks{
Node*head;
int capacity;
int currSize;

public:
Stacks(int c){
    capacity=c;
    currSize=0;
    head=NULL;
}

bool isEmpty(){
    return head==NULL;
}

bool isFull(){
    return currSize==capacity;
}

void push(int data){
    if(currSize==capacity){
        cout<<"Overflow"<<endl;
        return;
    }
    Node* new_node=new Node(data);
    new_node->next=head;
    head=new_node;
    currSize++;
}

void pop(){
    if(head==NULL){
        cout<<"Underflow"<<endl;
        return;
    }
    Node*new_head=head->next;
    head->next=NULL;
    delete(head);
    head=new_head;
}

int size(){
    return currSize;
}

int getTop(){
    if(head==NULL){
        cout<<"Underflow"<<endl;
        return -1;
    }
     return head->val;
}

void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
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




