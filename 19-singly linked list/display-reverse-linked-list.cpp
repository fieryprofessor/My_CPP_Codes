/*given the head of a singly linked list,just print the list in the reversed order.*/
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
int c=0;
void insertAtTail(int data){
    Node* new_node = new Node(data);
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
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
 
void reversedisplay(Node* head,int n){
   
    if(head==NULL){
       cout<<"NULL"<<"<-";
       return;
    }
    reversedisplay( head->next,n);
c++;
if(c==n){
    cout<<head->val;
}
else{
cout<<head->val<<"<-";
}
}

};


int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
LinkedList ll;
cout<<"Enter the values of the nodes"<<endl;
for(int i=1;i<=n;i++){
    int ele;
    cin>>ele;
    ll.insertAtTail(ele);
}
ll.display();
ll.reversedisplay(ll.head,n);
    return 0;
}