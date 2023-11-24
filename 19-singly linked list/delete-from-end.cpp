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
    Node* new_node= new Node(data);
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
 
void deleter(Node* &head,int k){
    Node*ptr1=head;
    Node*ptr2=head;

int count=k;
    while(count--){
        ptr2=ptr2->next;
    }

    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

   Node* to_delete=ptr1->next;
   ptr1->next=ptr1->next->next;
   free(to_delete);
}

int main(){
  Linkedlist ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.insertAtTail(4);
  ll.insertAtTail(5);
  ll.insertAtTail(6);
  ll.display();
  int k;
  cout<<"Enter the node from the end to be deleted"<<endl;
  cin>>k;
  deleter(ll.head,k);
  ll.display();
    return 0;
}