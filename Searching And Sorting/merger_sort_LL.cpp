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

Node* findMiddle(Node *head){

    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
   return slow;
}

Node*  mergeTwoLinkedLL(Node* ptr1,Node* ptr2){
Node* dummyHeadNode=new Node(-1);
Node* temp=dummyHeadNode;


 while(ptr1 && ptr2){
   if(ptr1->val < ptr2->val){
     temp->next=ptr1;
     temp=ptr1;
     ptr1=ptr1->next;
   }
   else{
    temp->next=ptr2;
    temp=ptr2;
    ptr2=ptr2->next;
   }
 }
   if(ptr1!=NULL){
    temp->next=ptr1;
   }
   else{
   temp->next=ptr2;
   }
 return dummyHeadNode->next;

}



Node* sortLL(Node* &head){

 // base case

 if(head==NULL || head->next==NULL){

    return head;
 }

 Node* middle = findMiddle(head);
 Node* right=middle->next;
 middle->next=NULL;
 Node* left=head;

 left=sortLL(left);
 right=sortLL(right);
 return merge_Two_LinkedLL(left,right);

}


//  remove dublicate funnction 
Node*  remove_dublicate_01(Node * &head){
  sortLL(head);

  Node* curr =head;
  while(curr!=NULL){
    Node* temp =curr;
  while(temp->next!=NULL){
     if(curr->val==temp->next->val){
        Node* del=temp->next;
       temp->next=temp->next->next;
       free(del);
    }
    else{
         temp=temp->next;
       }
  }
  curr=curr->next;
  }
  return head;
}


int main(){
   LinkedList ll;
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(9);
    ll.insertAtTail(2);
    ll.insertAtTail(5);
    ll.insertAtTail(1);
    ll.insertAtTail(5);
    ll.head=sortLL(ll.head);
    ll.display();
   
    return 0;
}