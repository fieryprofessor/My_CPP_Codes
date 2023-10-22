#include<iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
 
Node(int data){
    val= data;
    next= NULL;
} 
};

int main()
{
Node *v1 = new Node(100);
cout<<v1->val<<" "<<v1->next<<endl;
    return 0;
}