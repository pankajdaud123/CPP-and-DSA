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

Node * rotateRight(Node* &head,int k){

// find length of ll
 int n=0;
//  find tail node
 Node *tail = head;
 while(tail->next){
     n++;
    tail=tail->next;
   
 }
 n++; // for including last node;
 k =k%n;
 if(k==0){
    return head;
 }
  tail->next=head;
// traverse n-k nodes
  Node* temp = head;
  for(int i=1;i<n-k;i++){
    temp=temp->next;
  }
//   temp is pointing to the n-k node

 Node* newHead=temp->next;
  temp->next=NULL;

return newHead;

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
   ll.head=rotateRight(ll.head,5);
     ll.display();
 
    return 0;
}