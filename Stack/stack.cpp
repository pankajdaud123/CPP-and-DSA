#include<iostream>
using namespace std;

class Stack{
public:
int size;
int *arr;
int top;

 
Stack(int size){
  this->size=size;
  arr=new int[size];
  top=-1;
}

void push(int element){

if(size-top>1){
  top++; 
  arr[top]=element;  
  
}
else {
  cout<<"stack overflow"<<endl;
}

}

void pop(){
if(top>=0){
  top--;
}
else 
{
  cout<<"stack unnderflow"<<endl;
}
}

int peek(){
  if(top>=0)
     return arr[top];
  else{
    cout<<"stack is empty"<<endl;
    return -1;
  }
}

bool isEmpty(){
  if(top == -1){
     return true;
}else{
  return false;
}
}
};

int main(){

 Stack st(5);
 st.push(11);
 st.push(21);
 st.push(31);
 st.push(21);
 st.push(81);
 st.push(61);
 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;

 if(st.isEmpty()){
  cout<<"Empty";
 }
 else {
cout<<"stack is not empty";
 }
  return 0;
}