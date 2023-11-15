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

bool equalChecker(Node*head1,Node*head2){
Node*ptr1=head1;
Node*ptr2=head2;
while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1->val!=ptr2->val)
    return false;
ptr1=ptr1->next;
ptr2=ptr2->next;
}
return (ptr1==NULL && ptr2==NULL);
}

int main(){
int n;
cout<<"Enter the size of first linked list"<<endl;
cin>>n;
Linkedlist ll1;
cout<<"Enter the elements of first list"<<endl;
for(int i=1;i<=n;i++){
    int ele;
    cin>>ele;
    ll1.insertAtTail(ele);
}
int m;
cout<<"Enter the size of second linked list"<<endl;
cin>>m;
Linkedlist ll2;
cout<<"Enter the elements of second list"<<endl;
for(int i=1;i<=m;i++){
    int ele;
    cin>>ele;
    ll2.insertAtTail(ele);
}
ll1.display();
ll2.display();
cout<<equalChecker(ll1.head,ll2.head)<<endl;
if(equalChecker(ll1.head,ll2.head)==true){
    cout<<"lists are equal"<<endl;
}
else{
    cout<<"lists are not equal"<<endl;
}
    return 0;
}