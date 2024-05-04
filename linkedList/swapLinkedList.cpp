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

 Node* swapAdjacent(Node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    //recursive case
 Node* secondNode=head->next;
 head->next = swapAdjacent(secondNode->next);
 secondNode->next=head;//reversing the linked beetween
 return secondNode;
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
   ll.head = swapAdjacent(ll.head);
   ll.display();

 return 0;
}