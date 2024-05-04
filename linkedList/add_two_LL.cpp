#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
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
              cout<<temp->data<<"->";
              temp=temp->next;
        }cout<<"NULL"<<endl;
   
    }
};



    //Function to add two numbers represented by linked list.
    
    Node* reverseLL(Node* head){
        
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr!=NULL){
        Node* temp= curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        }
       return prev; 
        
    }
    
    void insertAt(struct Node*  &head ,struct Node* &tail,int val ){
        
        Node* temp=new Node(val);
        
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
           tail->next=temp;
           tail=temp;
            
        }
    }
    
    struct Node* add(struct Node* first, struct Node* second){
        int carry=0;
        Node* ansHead=NULL;
        Node* anstail=NULL;
        while(first!=NULL || second!=NULL || carry!=0){
             int val1=0;
            if(first!=NULL){
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL){
            val2=second->data;
            }
             int sum=carry+val1+val2;
             int digit= sum%10;
            //  create Node add answer linked list 
            insertAt(ansHead,anstail,digit);
            carry=sum/10;
            if(first!=NULL)
            first=first->next;
            
            if(second!=NULL)
            second=second->next;
            
        }
        
        return ansHead;
    
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // step 1 reverse LL
        
        first=reverseLL(first);
        second=reverseLL(second);
        
        // step 2 add 2 LL;
        Node *ans=add(first,second);
        
        // step 3 add LL
       
        ans= reverseLL(ans);
       
       return ans;
    }


//{ Driver Code Starts.

int main()
{
   LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(3);
   ll.insertAtTail(5);
   ll.insertAtTail(8);
   

   LinkedList ll2;
   ll2.insertAtTail(1);
   ll2.insertAtTail(2);
   ll2.insertAtTail(7);
   ll.head=addTwoLists(ll.head,ll2.head);
   ll.display();
    
    return 0;
}

// } Driver Code Ends