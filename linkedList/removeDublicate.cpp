#include<bits/stdc++.h>
#include<map>
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

  //   remove dublicate using nested loop
    // time complexity O(n)

 void remove_dublicate(Node * head){
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
}


//  remove dublicate by using step 1:- sort linnked list step:2-: remove from sorted

// Brute force

void sort_linkedList(Node * head){

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
}

Node*  remove_dublicate_01(Node * &head){
  sort_linkedList(head);
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


//  remove dublicate by map

 Node * remove_dublicate_ver_02( Node *head) 
    {
         if(head==NULL || head->next==NULL){
             return head;
         }
         
        map<int,bool>visited;
        Node *temp=head;
        visited[temp->val]=true;

         while(temp->next!=NULL){
           if(visited[temp->next->val]==true){
          Node* del=temp->next;
          temp->next=del->next;
            free(del);
         }
          else
         {
           visited[temp->next->val]=true;
           temp=temp->next;
          }
  
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
    ll.head = remove_dublicate_01(ll.head);
    ll.display();
   
    return 0;
}