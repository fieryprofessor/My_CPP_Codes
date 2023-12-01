/*just a simple program to demonstrate a doubly linked list*/
#include<iostream>
using namespace std;

class Node{
public:
int val;
Node*next;
Node*prev;
Node(int data){
    val=data;
    prev=NULL;
    next=NULL;
}
};

class Doublylinkedlist{
public:
Node*head;
Node*tail;

Doublylinkedlist(){
    head=NULL;
    tail=NULL;
}
};



int main(){
Node*new_node=new Node(3);
Doublylinkedlist dll;
dll.head=new_node;
dll.tail=new_node;
cout<<dll.head->val;
    return 0;
}