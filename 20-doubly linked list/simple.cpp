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

void insertAtStart(int data){
Node* new_node = new Node(data);
 if(head==NULL){
    head=new_node;
    tail=new_node;
    return;
 }
 new_node->next=head;
 head->prev=new_node;
 head=new_node;
 return;
}

void insertAtLast(int data){
    Node*new_node=new Node(data);
    if(head==NULL){
     head=new_node;
     tail=new_node;
     return;
    }
    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
    return;
}

void insertAtArbitraryPosition(int data,int k){
    Node*new_node=new Node(data);
    Node*temp=head;
    int count=k-1;
    while(count--){
        temp=temp->next;
    }
    new_node->next=temp;
    new_node->prev=temp->prev;
    temp->prev->next=new_node;
    temp->prev=new_node;
    return;
}

void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

};



int main(){

Doublylinkedlist dll;
dll.insertAtLast(1);
dll.display();
dll.insertAtLast(2);
dll.display();
dll.insertAtLast(4);
dll.display();
dll.insertAtArbitraryPosition(3,3);
dll.display();

    return 0;
}