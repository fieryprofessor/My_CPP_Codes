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

class Linkedlist{
    public:
    Node*head= NULL;

void insertAtTail(int data){
    Node* new_node = new Node(data);
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
    
void display(Node* x){
    Node*temp=x;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* reverser(Node *&head){
    Node* prevptr=NULL;
    Node* currptr=head;
   
    while(currptr!=NULL){
    Node* nextptr=currptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;
    }
    Node* new_head=prevptr;
    return new_head;
}
};

int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    Linkedlist ll;
    cout<<"Enter the values of the nodes"<<endl;
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        ll.insertAtTail(ele);
    }
    ll.display(ll.head);
    ll.display(ll.reverser(ll.head));
    return 0;
}