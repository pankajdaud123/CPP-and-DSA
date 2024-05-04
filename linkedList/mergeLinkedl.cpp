#include<iostream>
#include<vector>
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

Node* mergeSortLinkedLists(Node* &head1,Node* &head2){
    Node* dummyHeadNode=new Node(-1);

    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=dummyHeadNode;


    while(ptr1 && ptr2){
        
        if(ptr1->val < ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }

        ptr3=ptr3->next;
    }
   
   if(ptr1){
    ptr3->next=ptr1;
   }else{
    ptr3->next=ptr2;
   }

return dummyHeadNode->next;
}

//  merging  two linked list without using extra pointer 


Node* solve(Node*left,Node*right){

  Node* curr1=left;
  Node* next1=left->next;
  Node* curr2=right;
  Node* next2=curr2->next;


  while(next1!=NULL && curr1!=NULL){
   if(curr1->val<=curr2->val && curr2->val>=next1->val){
    // adding node left list
     curr1->next=curr2;
     next2=curr2->next;
     curr2->next=next1;

    //  shifting pointer
    
    curr1 = curr2;
    curr2 = next2;
   }
   else{
    curr1=next1;
    next1=next1->next;
   }
   
   if(next1->next==NULL){
     next1->next=curr1;
   }
   else{
    curr1->next=next1->next;
   }
  }

  if(next1==NULL){
    curr1->next=curr2;
    return left;
  }
return left;

}

Node *merge_Two_LinkedLL(Node* &left ,Node* &right){

if(left==NULL){
  return right;
 }
 if(right==NULL){
  return left;
 }
 if(left->val<=right->val){
    solve(left,right);
 }
 else{
    solve(right,left);
 }

}



Node* mergeKsorttedLinkedl(vector<Node*> &lists){
if(lists.size()==0){
    return NULL;
}

while(lists.size()>1){
Node* mergehead = merge_Two_LinkedLL(lists[0],lists[1]);
lists.push_back(mergehead);
lists.erase(lists.begin());
lists.erase(lists.begin());
}

return lists[0];
}

int main(){
   
   LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(3);
   ll.insertAtTail(5);
   ll.insertAtTail(8);
   

   LinkedList ll2;
   ll2.insertAtTail(1);
   ll2.insertAtTail(2);
   ll2.insertAtTail(7);

   LinkedList ll3;
   ll3.insertAtTail(4);
   ll3.insertAtTail(6);
   ll3.insertAtTail(7);

   ll.display();
   ll2.display();
   ll3.display();
    
   vector<Node*>lists;
   lists.push_back(ll.head);
   lists.push_back(ll2.head);
   lists.push_back(ll3.head);

   LinkedList mergeLL;
   mergeLL.head=mergeKsorttedLinkedl(lists);
   mergeLL.display();


   
    return 0;  
}