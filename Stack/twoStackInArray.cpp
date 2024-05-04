#include<iostream>
using namespace std;

class Two_Stack{
private:
int size;
int *arr;
int top1;
int top2;

public:
Two_Stack(int size){
this->size=size;
this->arr=new int[size];
this->top1=-1;
this->top2=size;
}
//push in stack1
void push1(int data){

if(top2-top1>1){
    top1++;
    arr[top1]=data;
}else{
    cout<<"Stack overflow"<<endl;
}

}
//push in stack 2
void push2(int data){

if(top2-top1>1){
    top2--;
    arr[top2]=data;
}else{
    cout<<"Stack overflow"<<endl;
}

}
// peek function for stack1
int peek1(){
    if(top1!=-1){
        return arr[top1];
    }else{
    cout<<"stack is empty"<<endl;
    return  -1;
    }
}
// peek function for stack2
int peek2(){
    if(top2!=size){
        return arr[top2];
    }else{
    cout<<"stack is empty"<<endl;
    return  -1;
    }
}

bool isEmpty()
{if(top1<=top2 && top1>=top2){
    return true;
}else{
    return false;
}
}
// pop for stack 1
void pop1(){
    if(top1!=-1){
        top1--;
    }else{
    cout<<"Stack underflow"<<endl;
    }
}
// pop for stack 2
void pop2(){
    if(top2!=size){
        top2++;
    }else{
    cout<<"Stack underflow"<<endl;
    }
}

};
int main(){
Two_Stack st(6);
st.push1(1);
st.push1(2);
st.push2(3);
st.push2(6);
st.push2(5);
st.push2(4);
cout<<st.peek1()<<endl;
st.pop1();
cout<<st.peek1()<<endl;
st.pop1();
cout<<st.peek2()<<endl;
st.pop2();
cout<<st.peek2()<<endl;
st.pop2();
cout<<st.peek2()<<endl;



if(st.isEmpty()){
    cout<<"empty";
}
else{
    cout<<"not empty";
}




    return 0;
}