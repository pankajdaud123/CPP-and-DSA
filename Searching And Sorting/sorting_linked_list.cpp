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




Node* sort_linkedList(Node * &head){

vector<int>arr;
Node* temp=head;

while(temp!=NULL){
    arr.push_back(temp->val);
    temp=temp->next; 
}
int n=arr.size();

sort(arr.begin(),arr.end());
int i=0;
Node *curr=head;
while(curr!=NULL){
    curr->val=arr[i];
    i++;
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
    ll.head=sort_linkedList(ll.head);
    ll.display();
    return 0;
}
 
