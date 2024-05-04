#include<iostream>
#include<stack>
using namespace std;


void sortInsert(stack<int>&s,int num){
    // base case 
    if(!s.empty() || s.top()<num){
        s.push(num);
        return ;
    }
    int n=s.top();
    s.pop();
    sortInsert(s,n);
    s.push(n);
}

void sortStack(stack<int>&s){
// base case
if(s.empty()){
    return;
}
int num=s.top();
s.pop();

sortStack(s);
sortInsert(s,num);
}
int main(){
stack<int>st;
st.push(5);
st.push(4);
st.push(2);
st.push(6);
st.push(3);
st.push(9);
sortStack(st);
while(!st.empty()){
cout<<st.top()<<endl;
st.pop();
}
    return 0;
}
