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



bool detectCycle_ver_01(Node *head){
    if(head==NULL){
        return false;
    }
  
  Node  *temp=head->next;

  while(temp!=NULL && temp!=head){
    temp=temp->next;
  }
  if(temp==head){
    return true;
  }
 return false;
}


//  detect cycle usind  map

bool detectCycle_map(Node* head){
if(head==NULL){
    return  false;
}

map<Node*,bool>visited;

Node* temp=head;

while(temp!=NULL){
   if(visited[temp]==true){
    return true;
   }
    visited[temp]=true;
    temp=temp->next;

}
return false;

}

// to remove the cycle function
    
void removeCycle(Node *&head){
    Node* slow=head;
    Node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;

    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
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
//    ll.display();
   ll.head->next->next->next->next->next->next = ll.head->next->next->next;
   cout<<detectCycle_map(ll.head)<<endl;
   removeCycle(ll.head);
   cout<<"After removing the cycle"<<endl;
   cout<<detectCycle_map(ll.head)<<endl;
   ll.display();



    return 0;
}