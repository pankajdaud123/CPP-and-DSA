#include<iostream>
#include<map>
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


bool detectCycle(Node* head){
    if(!head){
        return false;
    }
Node *slow=head;
Node *fast=head;

while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;

    if(slow==fast){
        return true;
    }
}
return false;
}


Node *floyd_Detection_loop(Node * head){

Node *slow=head;
Node* fast=head;

while(fast!=NULL){
    slow=slow->next;
    fast=fast->next->next;

    if(slow==fast){
        // cout<<"present at "<<slow->val<<endl;
        return slow;
    }
}
}


Node * remove(Node* head){

Node* intersection=floyd_Detection_loop(head);
Node* slow=head;

while(intersection!=slow){
slow=slow->next;
intersection=intersection->next;
}

return slow;
}

void remove_loop(Node* &head){
Node* intersection=floyd_Detection_loop(head);
Node* slow=head;

while(intersection->next!=slow->next){
slow=slow->next;
intersection=intersection->next;
}

slow->next=NULL;

}


int main(){
  
  LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(3);
   ll.insertAtTail(5);
   ll.insertAtTail(8);
   ll.insertAtTail(9);
   ll.insertAtTail(11);
   ll.head->next->next->next->next = ll.head->next;
   cout<<detectCycle(ll.head)<<endl;
   remove_loop(ll.head);
   cout<<"after removing "<<endl;
   cout<<detectCycle(ll.head);
   

    return 0;
}