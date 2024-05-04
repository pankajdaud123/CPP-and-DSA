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

bool checkll(Node *head1,Node *head2){
Node *temp1=head1;
Node *temp2=head2;
while(temp1!=NULL && temp2!=NULL){
    if(temp1->val!=temp2->val){
        return false;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }

  return (temp1==NULL && temp2==NULL);
}




int main(){
   
   LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
   ll.insertAtTail(6);
   
   

   LinkedList ll2;
   ll2.insertAtTail(1);
   ll2.insertAtTail(2);
   ll2.insertAtTail(3);
   ll2.insertAtTail(4);
   ll2.insertAtTail(5);

   ll.display();
   ll2.display();

   cout<<checkll(ll.head,ll2.head)<<endl;



    return 0;
}