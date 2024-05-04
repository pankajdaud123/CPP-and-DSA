#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int data ){ 
       this->data=data;
       this->next= NULL ;
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

void insertNode(Node *&tail,int element,int d){
// /empty list
if(tail == NULL){
    Node *new_node=new Node(d);
    tail=new_node;
    new_node->next=new_node;
}
else{
    // non empty  list 
    // assuming the element is presenting in the list 
    
   Node *curr=tail;

   while(curr->data != element){
    curr=curr->next;
   }

//    element found // curr poinnt to the lement 

  Node* temp= new Node(d);
  temp->next=curr->next;
  curr->next=temp;
}
}

void print(Node *tail){

    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    Node* temp=tail;
  do {
    cout<<tail->data<<" ";
    tail=tail->next;
    } while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int data){
//  empty list 
if(tail==NULL){
    cout<<"List is empty"<<endl;
    return;
}
else{
    Node* prev=tail;
    Node* curr=prev->next;
    while(curr->data!=data){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    // 1 node Linked list

   if(curr==prev){
    tail=NULL;
   }
//    2 node list 


    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;

}


}

int main(){
Node *tail=NULL;
insertNode(tail,5,3);
print(tail);
insertNode(tail,3,5);
print(tail);
// insertNode(tail,5,7);
// print(tail);
// insertNode(tail,7,8);
// print(tail);
// insertNode(tail,3,4);
// print(tail);
deleteNode(tail,3);
print(tail);
return 0;
}