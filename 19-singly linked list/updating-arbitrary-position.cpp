#include<iostream>
using namespace std;

class Node{
    public:
int val;
Node* next;
Node(int data){
    val=data;
    next= NULL;
}
};

class LinkedList{
public:
Node* head;
LinkedList(){
    head=NULL;
}

void insertAtTail(int data){
    Node* new_node = new Node(data);

if(head==NULL){
    head=new_node;
    return;
}

    Node*temp = head;
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

void Update(Node* &head , int pos,int val){
    Node*temp=head;
    int current_pos=0;
    while(current_pos!=pos){
        temp=temp->next;
        current_pos++;
    }
    temp->val=val;
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the linked list"<<endl;
    cin>>n;
    LinkedList ll;
    cout<<"Enter the elements"<<endl;
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        ll.insertAtTail(ele);
    }
    ll.display();
    int x,pos;
    cout<<"Enter the position and element to be updated"<<endl;
    cin>>pos>>x;
    Update(ll.head,pos,x);
    ll.display();
    return 0;
}