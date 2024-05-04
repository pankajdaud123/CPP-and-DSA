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
Node * reorderLinkedlist(Node * &head){
    
     Node* slow=head;
     Node* fast=head;
     while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
     }
    //  slow point to the middle element
    Node* curr=slow->next;
    Node* prev=slow;
    slow->next=NULL;
//  breake the linked list in two part
    while(curr){
        Node* newNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newNode;
    }
// Not it is reverse
// merging the two halves;
Node* ptr1=head;
Node* ptr2=prev;

while(ptr1!=ptr2){
    Node* temp=ptr1->next;
    ptr1->next=ptr2;
    ptr1=ptr2;
    ptr2=temp;
}

return head;


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
   ll.head= reorderLinkedlist(ll.head);
   ll.display();
   
    return 0;
}