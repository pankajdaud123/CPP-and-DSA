#include<iostream>
using namespace std;

class Node{
public:
Node *prev;
int data;
Node* next;


Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}

~Node(){
    int val=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
  cout<<"Memory free for node with data "<<val<<endl;
}
};
void print(Node* head){

    Node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
//gives length
int getLength(Node *head){
    int len=0;
    Node* temp=head;
    while(temp){
       len++;
       temp=temp->next;
    }

    return len;
}

// innsertion at head;
void  insert_at_head(Node* &tail,Node* &head ,int  d){
  // empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp; 
        tail=temp;
    }
    else{
    Node *new_node=new Node(d);
    new_node->next=head;
    head->prev=new_node;
    head=new_node;

    }
    
}

//  Insertion at tail 

void insert_at_tail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;

    }
    else{

 Node* temp=new Node(d);
 tail->next=temp;
 temp->prev=tail;
 tail=temp;
    }
 
}


void insert_at_pos(Node *&head,Node *&tail,int d,int pos){
    // innsert at start
    if(pos == 1){
        insert_at_head(tail,head,d);
        return;
    }

    Node *temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //  insert at last pos
     if(temp->next==NULL){
        insert_at_tail(tail,head,d);
        return;
     }

    Node* new_node =new Node(d);
   
    new_node->next=temp->next;
    temp->next->prev=new_node;
     temp->next=new_node;
    new_node->prev=temp;

}

void deleteAtKPos(Node* & head,Node*&tail,int pos){
   
    if(pos==1){
     Node *temp=head;
     temp->next->prev=NULL;
     head=temp->next;
     temp->next=NULL;
     delete temp; 
    }
    else{
    Node* curr = head;
    Node* prev=NULL;
    int current_pos=1;
    while(current_pos<pos){
        prev=curr;
        curr=curr->next;
        current_pos++;
    }
    if(curr->next==NULL)
        tail=prev;
   
      curr->prev=NULL;
       prev->next=curr->next;
       curr->next=NULL;
       delete curr;
    }
     }



 
int main(){
 Node* head= NULL;
 Node* tail=NULL;
//  cout<<getLength(head)<<endl;
 insert_at_head(tail,head,10);
 print(head);
 insert_at_head(tail,head,9);
 print(head);
 insert_at_head(tail,head,8);
 print(head);
 insert_at_tail(tail,head,11);
 print(head);
  insert_at_tail(tail,head,12);
 print(head);
 insert_at_pos(head,tail,100,2);
 print(head);
 insert_at_pos(head,tail,50,1);
 print(head);
  insert_at_pos(head,tail,101,8);
 print(head);
 deleteAtKPos(head,tail,8);
  print(head);
  cout<<head->data<<endl<<tail->data<<endl;



    return 0;
}