//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;



class Solution
{
    public:
  
    Node* segregate(Node *head) {
        
        // Add code here
       int zero_cnt=0;
       int one_cnt=0;
       int two_cnt=0;
       
       Node* temp=head;
       
      while(temp){
           if(temp->data==0)
               zero_cnt++;
           
           else if(temp->data==1)
               one_cnt++;
           
           else if (temp->data==2)
              two_cnt++;
              
        temp=temp->next;
       }
       
       
       temp=head;
       
       while(temp){
          if(zero_cnt!=0){
              temp->data=0;
              zero_cnt--;
          } 
          else if( one_cnt!=0){
              temp->data=1;
              one_cnt--;
          }
          else if(two_cnt!=0){
              temp->data=2;
              two_cnt--;
          }
           
           
         temp=temp->next;  
       }
        
       return head;
    }
};


void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}


void insert(int n1) {
    int n, value, i;
   
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends