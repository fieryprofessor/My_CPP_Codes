/*merge two sorted linked lists into one singly linked list such that the resulting is also sorted*/

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
    Node* new_node=new Node(data);
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

void display(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

Node* mergeLinkedLists(Node*&head1,Node*&head2){
Node*dummy_head= new Node(-1);

Node*ptr1=head1;
Node*ptr2=head2;
Node*ptr3=dummy_head;

while(ptr1 && ptr2){
if(ptr1->val<ptr2->val){
    ptr3->next=ptr1;
    ptr3=ptr3->next;
    ptr1=ptr1->next;
}
else{
     ptr3->next=ptr2;
    ptr3=ptr3->next;
    ptr2=ptr2->next;
}
}
if(ptr1==NULL){
    ptr3->next=ptr2;
}
else{
    ptr3->next=ptr1;
}

return dummy_head->next;
}

int main(){

Linkedlist ll1;
ll1.insertAtTail(1);
ll1.insertAtTail(4);
ll1.insertAtTail(5);

Linkedlist ll2;
ll2.insertAtTail(2);
ll2.insertAtTail(3);
ll1.display(ll1.head);
ll2.display(ll2.head);

Node*merge_head=mergeLinkedLists(ll1.head,ll2.head);
Linkedlist ll3;
ll3.display(merge_head);
    return 0;
}