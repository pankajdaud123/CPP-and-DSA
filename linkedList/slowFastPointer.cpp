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

Node* findMiddleNode(Node* &head){
    Node* slowPtr=head;
    Node* fastPtr=head;

    while(fastPtr!=NULL && fastPtr->next!=NULL){
    slowPtr=slowPtr->next;
    fastPtr=fastPtr->next->next;
    }

    return slowPtr;
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

   Node* middleNode = findMiddleNode(ll.head);
   cout<<middleNode->val<<endl;



    return 0;
}