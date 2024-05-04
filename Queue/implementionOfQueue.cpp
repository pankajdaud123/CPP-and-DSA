#include<iostream>
using namespace std;


class Queue{
private:
int *arr;
int front;
int rear;
int size;


public:

 Queue(int size){
    this->size=size;
    arr= new int[size];
    front = 0;
    rear=0;
 }
void enQueue(int element){

 if(rear==size){
     cout<<" queue is full"<<endl;

 }
 else{

    arr[rear]= element;
   rear++;
   
 }
}

bool isEmpty(){
if(front==rear)
    return true;
else
  return false;

}
void deQueue(){

    if(front==rear){
        cout<<" queue is empty"<<endl;
    }
    
    else{
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
}

void first(){
    if(front==rear) cout<<"Empty"<<endl;  
   cout<<"Front of Queue is  "<<arr[front]<<endl;
}
void last(){
    cout<<"rear elememnt of Queue "<<arr[rear]<<endl;
}

void printQueue(){
for(int i=0;i<size;i++) {
    cout<<arr[i]<<" ";
}
cout<<endl;
}
};

int main(){
Queue q(5);
q.enQueue(2);
q.enQueue(8);
q.enQueue(3);
q.enQueue(5);
q.enQueue(6);
q.last();
q.deQueue();
q.deQueue();
q.deQueue();
q.deQueue();
q.deQueue();
q.last();

q.first();
// q.printQueue();


if(q.isEmpty()){
    cout<<"Queue is Empty"<<endl;
}
else{
    cout<<" Queue is Not Empty"<<endl;
}

return 0;
}