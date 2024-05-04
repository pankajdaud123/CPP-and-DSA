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


Node* recursive(Node *head){

if(head==NULL || head->next==NULL){
    
    return head;
}

Node *chotaHead=recursive(head->next);

head->next->next=head;
head->next=NULL;
return chotaHead;
}

void reverse(Node* &head,Node *curr,Node*prev){
  // base case
  if(curr==NULL){
    head=prev;
    return;
  }
  Node* temp=curr->next;
  reverse(head,temp,curr);
  curr->next=prev; 
}


Node* reverseLL_recursion(Node* &head){
 return (recursive(head));
//   Node *curr=head;
//   Node*prev=NULL;
//   reverse(head,curr,prev);
//   return head;

}



 Node* reverseLL(Node* &head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    Node* curr=head;
    Node* prev=NULL;
    Node* temp=NULL;
    while(curr!=NULL){
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    }

    return prev;
 }
int main(){
  
  LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(3);
   ll.insertAtTail(5);
   ll.insertAtTail(8);
   ll.insertAtTail(9);
   ll.insertAtTail(11);
   ll.display();
   ll.head=reverseLL_recursion(ll.head);
   ll.display();

 return 0;
}