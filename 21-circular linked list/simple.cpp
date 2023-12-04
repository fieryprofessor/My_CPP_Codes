//program to demonstrate a simple circular linked list.
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

class CircularLinkedlist{
public:
Node*head=NULL;

void insertAtStart(int data){
    Node*new_node=new Node(data);
    if(head==NULL){
        head=new_node;
        new_node->next=head;
        return;
    }
    new_node->next=head;
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=new_node;
    head=new_node;
}

void insertAtTail(int data){
    Node*new_node=new Node(data);
    if(head==NULL){
        head=new_node;
        new_node->next=head;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    new_node->next=head;
    temp->next=new_node;
}

void display(){
    Node*temp=head;
    do{
     cout<<temp->val<<"->";
     temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

};

int main(){
    CircularLinkedlist cll;
    cll.insertAtStart(1);
    cll.display();
    cll.insertAtStart(2);
    cll.display();
    cll.insertAtTail(3);
    cll.display();
    return 0;
}