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

class LinkedList {
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

int length(Node *&head){
 Node *temp=head;
 int len=0;
 while(temp!=NULL){
    len++;
    temp=temp->next;
 }
   return len;
}

void deleteHead(Node* &head){
  Node* temp=head;
  head=head->next;
  free(temp);
}

void remove_Kth_node(Node* &head,int pos){
    int l=length(head);
    int new_pos=l-pos;
    
    if(pos==l){
        deleteHead(head);
        return;
    }

    Node *prev=head;
    int curr_pos=0;

    while(curr_pos!=new_pos-1){
        curr_pos++;  
        prev=prev->next;
    }
    Node* temp= prev->next;
    prev->next=prev->next->next;
    free(temp);
   
}

ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode * ptr1=head;
        ListNode* ptr2=head;

        while(n!=0){
            ptr2=ptr2->next;
            n--;
        }
        if(ptr2==NULL){
             ListNode* temp=head;
             head=head->next;
             delete temp;
            return head; 
         }

        while(ptr2->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
         ListNode* temp=ptr1->next;
         ptr1->next=ptr1->next->next;
         delete temp;

        return head;
    }

// leetcode problem
int main(){

LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
   ll.insertAtTail(6);
   ll.display();
  //  Node * ans=remove_Kth_node_from_end(ll.head,4);
  //  cout<<ans->val<<endl;
  // ll.display();
  ll.head=remove_Kth_node_from_end(ll.head,2);
  
  

    return 0;
}