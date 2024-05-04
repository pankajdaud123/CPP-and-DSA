#include<bits/stdc++.h>
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

class LinkedList{

 public:
  Node* head;
  LinkedList(){
   head=NULL;
  }

  void insertAtTail(int value){
      Node* new_node = new Node(value);
    if(head==NULL){
        head=new_node;
        return;
    }

    Node* temp = head;
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

      }cout<<"NULL"<<endl;;

      }
};
Node* reverseList(Node * & head){
    Node* prevPtr=NULL;
    Node* currPtr= head;

   while(currPtr!=NULL){
    Node* temp=currPtr->next;
    currPtr->next=prevPtr;
    prevPtr=currPtr; // moving all 3 pointer one step ahead
    currPtr=temp;
    }
    Node* new_head= prevPtr;
   return new_head;

}

Node* reversellrecursion(Node * & head){
//base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* new_head=reversellrecursion(head->next);
    head->next->next=head;
    head->next=NULL;//head is pointing to the last node in reversal ll
    return new_head;


}


int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    ll.head=reversellrecursion(ll.head);
    ll.display();
    
    
        return 0;
}