/*given the head of a sorted linked list,delete all duplicates such that each element only appears once
return the linked list sorted as well*/
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
Node* new_node =new Node(data);
if(head==NULL){
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

};

void deleteduplicates(Node* &head){
Node*current=head;
while(current->next!=NULL){
    if(current->val!=current->next->val)
    current=current->next;
    
    if(current->val==current->next->val){
     Node*temp=current->next;
     current->next=current->next->next;
     free(temp);
    }
}
}

int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    LinkedList ll;
    cout<<"Enter the sorted values"<<endl;
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        ll.insertAtTail(ele);
    }
    ll.display();
    deleteduplicates(ll.head);
    ll.display();
    return 0;
}