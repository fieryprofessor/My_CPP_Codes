/*given a head of a linked list,rotate the list by k places*/
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

void display(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

};

Node*rotateByK(Node*&head,int k){
//1.find length of list.
int n=0;
//2.find the tail node
Node*tail=head;
while(tail->next!=NULL){
    n++;
    tail=tail->next;
}
n++; //for including last node
k=k%n;
if(k==0){
    return head;
}
tail->next=head;
//3.traverse n-k nodes.
Node*temp=head;
for(int i=1;i<n-k;i++){
    temp=temp->next;
}
//temp is now pointing to (n-k)th node
Node*new_head=temp->next;
temp->next=NULL;
return new_head;
}

int main(){
Linkedlist ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(4);
ll.insertAtTail(5);
ll.insertAtTail(6);
ll.display(ll.head);
int k;
cout<<"Enter how many times to rotate the list"<<endl;
cin>>k;
Node*new_head=rotateByK(ll.head,k);
ll.display(new_head);
    return 0;
}