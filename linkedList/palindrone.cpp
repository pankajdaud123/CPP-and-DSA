#include<iostream>
using namespace std;


class Node{
    public:

int val;
Node *next;

Node(int data){
    val=data;
    next=NULL;
}
};
class LinkedList{
    public:
 Node *head;

 LinkedList(){
    head=NULL;
 }

 void insertAtTail(int data){
        Node *new_node=new Node(data);
         if(head==NULL){
            head=new_node;
            return;
         }

    Node *temp=head;

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
        }cout<<"NULL"<<endl;
   
    }

};

bool ispalindrone(Node* &head){
 Node *slow=head;
 Node *fast=head;
// 1.find middle element
 while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
 }
//  Now slow is pointing to the middle element
// 2.break
Node* curr=slow->next;
Node* prev=slow;
slow->next=NULL;

//  reverse the seccond half of linnked  list

 while(curr){
    Node* newNode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=newNode;
 }

// check the two linked list same 
Node* head1=head;
Node* head2=prev;

while(head2){
    if(head1->val!=head2->val){
        return false;
    }
    head1=head1->next;
    head2=head2->next;
}
return true;
}


int main(){
  
  LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(2);
   ll.insertAtTail(1);
   ll.display();
   cout<<ispalindrone(ll.head);
   

    return 0;
}