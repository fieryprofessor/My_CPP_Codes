#include<iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
Node(int data){
    val=data;
    next=NULL;
}
};

class LinkedList{
public:
Node* head=NULL;

void insertAtTail(int data){
    Node* new_node=new Node(data);
   if (head==NULL)
   {
    head=new_node;
    return;
   }
   Node* temp=head;
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

void deleteAtHead(){
    if(head==NULL)
    return;

    Node*to_delete=head;
    head=head->next;
    free(to_delete);
}

void deleteAtTail(){
    if(head==NULL)
    return;

   Node* second_last=head;
   while(second_last->next->next!=NULL){
    second_last=second_last->next;
   }
   Node* to_delete=second_last->next;
   second_last->next=NULL;
   free(to_delete);
}

void deleteAtPosition(int pos){
    if(pos==0){
        deleteAtHead();
        return;
    }
    Node* to_delete;
    Node* one_before=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        one_before=one_before->next;
        current_pos++;
    }
    to_delete=one_before->next;
    one_before->next=one_before->next->next;
    free(to_delete);
}

};

int main(){
LinkedList ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(4);
ll.insertAtTail(5);
ll.display();
ll.deleteAtHead();
ll.display();
ll.deleteAtTail();
ll.display();
ll.deleteAtPosition(1);
ll.display();
    return 0;
}