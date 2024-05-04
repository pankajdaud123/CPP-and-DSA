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

Node *oddEvenprint(Node* &head){

    if(!head){
        return head;
    }
    Node* evenHead=head->next;
    Node* oddptr=head;
    Node* evenPtr=evenHead;
   
   while(evenPtr && evenPtr->next){
    oddptr->next=oddptr->next->next;
    evenPtr->next=evenPtr->next->next;
    oddptr=oddptr->next;
    evenPtr=evenPtr->next;
   }
 
   oddptr->next=evenHead; 

   return head;
}


    int main(){
  
  LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
   ll.insertAtTail(6);
   ll.display();
   ll.head=oddEvenprint(ll.head);
   ll.display();
    return 0;
}