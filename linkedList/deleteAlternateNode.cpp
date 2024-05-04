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

// quetion number 1 st deleteAlternate node;

void deleteAlternateNode(Node* &head){

   Node* curr_node=head;

     while(curr_node!=NULL && curr_node->next!=NULL){
            Node*temp=curr_node->next;//this the node to be deleted
          curr_node->next=curr_node->next->next;
      free(temp);
      curr_node=curr_node->next;
    }   
}

// Quetion Number 2-> delete dublicate node

void deleteDublicate(Node* &head){

 Node* curr_node=head;

   while(curr_node!=NULL){

      while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
     Node* temp=curr_node->next;//node to be delted
     curr_node->next=curr_node->next->next;
     free(temp);
  }
     //this loop  end when cuurent node and next node vaulue are different  
    //or linked list ends
   curr_node=curr_node->next;

    }



}

//  quetion Number 3 reverse the linked list 

void reversePrint(Node* & head){
     // base case
  if(head==NULL){
    return;
  }
   //  recursion call
    reversePrint(head->next);
   cout<<head->val<<" ";
}


void reverseList(){


}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    // deleteAlternateNode(ll.head);
   // deleteDublicate(ll.head);
     reversePrint(ll.head);
    return 0;
}