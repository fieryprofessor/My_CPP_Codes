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

class Linkedlist{
public:
Node*head=NULL;

void insertAtTail(int data){
    Node*new_node=new Node(data);
    if(head==NULL){
     head=new_node;
     return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

};

int middleElement(Node*&head){
    Node*ptr1=head;
    Node*ptr2=head;
    while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    return ptr1->val;
}

int main(){
Linkedlist ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(4);
ll.insertAtTail(5);
ll.display();
int middle_element=middleElement(ll.head);
cout<<middle_element<<endl;
    return 0;
}