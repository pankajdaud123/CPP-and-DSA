#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    int *next; 
    Node(int data){
        val=data;
        next=NULL;
    } 
};

class Stack{
   private:
   Node *top=NULL;

   public:
   void push(int data){
    Node *temp=new Node(data);
      
      if(!temp){
       cout<<"stack overflow"<<endl;
       exit(1);
      }
     temp->next=top;
     top=temp;

   }

   int isEmpty(){
    return top==NULL;
   }

   int peek(){
    if(!isEmpty()){
        return top->val;
    }
    else{
        cout<<"\nstack is empty\n"<<endl;
    }
   }


   void pop(){
    Node *temp;
      if(isEmpty()){
    cout<<"\nStack unflow\n";
    }
    else{
        temp=top;
        top=top->next;
        free(temp);

    }
   }
};




int main(){

Stack st;
st.push(1);
st.push(2);
st.push(3);
st.peek();
st.pop();
st.peek();

    return 0;
}