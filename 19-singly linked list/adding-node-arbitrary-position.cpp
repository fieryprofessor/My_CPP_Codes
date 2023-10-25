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

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next=head;
    head=n;
}

void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtPosition(Node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node*temp =head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    Node* new_node = new Node(val);
    new_node->next=temp->next;
    temp->next = new_node;
}

int main()
{
    Node* v1 = new Node(1);
   Node* head=v1;
    display(head);

    insertAtTail(head,2);
    display(head);

    insertAtTail(head,4);
    display(head);

    insertAtPosition(head,3,2);
    display(head);
    return 0;
}