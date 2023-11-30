/*given a head of a linked list,determine if the list has cycle in it or not.*/
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
        while (temp->next!=NULL)
        {
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

bool detectCycle(Node*&head){

    if(!head){
        return false;
    }

    Node*slow=head;
    Node*fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
Linkedlist ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(4);
ll.insertAtTail(5);
ll.display();
ll.head->next->next->next->next->next=ll.head->next->next;
cout<<detectCycle(ll.head)<<endl;
    return 0;
}