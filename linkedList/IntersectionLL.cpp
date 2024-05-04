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

int length(Node *head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

return len;
}

Node *moveHeadByk(Node *head, int pos){  
    Node *temp=head;
    while(pos--){
        temp=temp->next;
    }
  return temp;
}



Node *getIntersection(Node *head1,Node *head2){
// calculating the length
   int ll1=length(head1);
   int ll2=length(head2);
 Node *ptr1;
 Node *ptr2;
   if(ll1>ll2){
       int pos=ll1-ll2;
       ptr1=moveHeadByk(head1,pos);
       ptr2=head2;
       }
   else {
      int pos=ll2-ll1;
        moveHeadByk(head2,pos);
        ptr2=moveHeadByk(head1,pos);
       ptr1=head2;
   }
while(ptr1){
     if(ptr1==ptr2){
        return ptr1;
     }
    ptr1=ptr1->next;
    ptr2=ptr2->next;
}

return NULL;

}




int main(){
   
   LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
 
   ll.display();
   

   LinkedList ll2;

   ll2.insertAtTail(6);
   ll2.insertAtTail(7);
   ll2.head->next->next =ll.head->next->next->next;
   ll2.display();

  Node * intersection= getIntersection(ll.head,ll2.head);

  if(intersection)
     cout<<intersection->val<<endl;
  else
    cout<<"-1"<<endl;


    return 0;
}