#include<iostream>
#include<stack>
using  namespace std;

void insertBottom(stack<int>&s,int p){
    // base case
    if(s.empty()){
        s.push(p);
        return;
    }
    int num=s.top();
    s.pop();
    // recursive call 
    insertBottom(s,p);
    s.push(num);
}

void reverse(stack<int>&s){
//  base case
 if(s.empty()){
    return;
 }
 int num=s.top();
 s.pop();
 reverse(s);
 insertBottom(s,num);
}

int main(){
stack<int>st;
st.push(2);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
st.push(8);
reverse(st);
while(!st.empty()){
cout<<st.top()<<endl;
st.pop();
}
    return 0;
}