/*given the head of a linked list, delete every alternate element from the list starting from the second element.*/
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

class LinkedList{
public:
Node* head=NULL;
 
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

 void display(){
    Node*temp =head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
 }

};

void deleter(Node*&head){
Node* current_node=head;
Node*temp;
while(current_node!=NULL && current_node->next!=NULL){
temp=current_node->next;
current_node->next=current_node->next->next;
free(temp);
current_node=current_node->next;
}
}

int main()
{
    int n;
    cout<<"Enter the number of nodes in the linked list"<<endl;
    cin>>n;
    LinkedList ll;
    cout<<"Enter the values for the nodes"<<endl;
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        ll.insertAtTail(ele);
    }
    ll.display();
    deleter(ll.head);
    ll.display();
    return 0;
}