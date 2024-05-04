#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node (int data ){ 
         val=data;
        next= NULL ;
    }
};

void deleteHead(Node* &head){
  Node* temp=head;
  head=head->next;
  free(temp);
}

void deleteAtEnd(Node* &head){
     Node* second_last=head;
   while(second_last->next->next!= NULL){
    second_last=second_last->next;
    }
    Node* temp= second_last->next;
   second_last->next=NULL;
   free(temp);
}
void deleteAtKPos(Node* & head,int pos){

    if(pos==0){

        deleteHead(head);
        return;
    }
    Node* prev = head;
    int current_pos=0;
    while(current_pos!=pos-1){
        prev=prev->next;
        current_pos++;
    }
      Node* temp=prev->next;
      prev->next=prev->next->next;
      free(temp); 
}

void insertAtFirst(Node* &head,int val){
   cout<<"12"<<endl;;
    Node* new_node= new Node(val);
    new_node->val=val;
    new_node->next = head;
    head= new_node;
}

void insertAtPos(Node* head, int val, int pos){
    
    if(pos==0){
        insertAtFirst(head,val);
        cout<<"sdfgh"<<endl;
        return;
    }
    Node* new_node=new Node(val);
     Node* temp=head;
      int  current_pos=0;
     while(current_pos!=pos-1){
       temp=temp->next;
        current_pos++;
     }

     // temp is pointing to position -1; 

     new_node->next=temp->next;
     temp->next=new_node;

}

void insertAtLast(Node* &head,int val){

    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
     temp=temp->next; 
    }

    temp->next=new_node;

}

void updateAtKPos(Node* &head,int val,int k){

  Node* temp=head;
  int current_pos=0;
    while(current_pos!=k){
          temp=temp->next;
          current_pos++;
    }

    //reached at k position 
      temp->val=val;

}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
         cout<<temp->val<<"->";
          temp=temp->next;  
          }
      cout<<"NULL"<<endl;
       }






int main(){

   Node* head=NULL;
   insertAtFirst(head,2);
   display(head);
   insertAtFirst(head,1);
   display(head);
   insertAtLast(head,5);
   display(head);
   insertAtLast(head,6);
   display(head);
   insertAtPos(head,9,2 );
   display(head);
   insertAtPos(head,7,0);
   display(head);
   updateAtKPos(head,3,2            );
   display(head);
   deleteHead(head);
   display(head);
   deleteAtEnd(head);
   display(head);
   deleteAtKPos(head,1);
   display(head);
   deleteAtKPos(head,0);
   display(head);

   cout<<head->val<<endl;
   cout<<insertAtLast->val<<endl;


    return 0;
}